/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:16:17 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/08 12:17:21 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	digits_len(int n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static	void	fill_str(char *str, long int n, size_t length)
{
	str[length] = '\0';
	while (length--)
	{
		str[length] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char		*digits_str;
	size_t		len;
	long int	nb;

	nb = n;
	len = digits_len(n);
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	digits_str = malloc((len + 1) * sizeof(char));
	if (digits_str == NULL)
		return (NULL);
	digits_str[len] = '\0';
	if (n == 0)
	{
		digits_str[0] = '0';
		return (digits_str);
	}
	fill_str(digits_str, nb, len);
	if (n < 0)
		digits_str[0] = '-';
	return (digits_str);
}
