/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:36:30 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/04 17:00:44 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *)(str));
	i = 0;
	j = 0;
	while (*str && i < len)
	{
		if (str[i] == to_find[j] && to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return ((char *)(&str[i - j]));
			}
		}
		else
		{
			j = 0;
			i++;
		}
	}
	return (NULL);
}
