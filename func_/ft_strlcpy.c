/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:20:24 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/18 18:16:36 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	if (!src)
		return ((size_t)0);
	if (len > ft_strlen(src))
	{
		return (ft_strlen(src));
	}
	i = 0;
	while (i <= len - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return (ft_strlen(src));
}
