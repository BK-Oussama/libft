/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:45:53 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/16 16:11:08 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n_bytes)
{
	unsigned char		*dest_d;
	unsigned const char	*src_s;

	dest_d = (unsigned char *)dest;
	src_s = (unsigned char *)src;
	while (n_bytes)
	{
		*dest_d = *src_s;
		dest_d++;
		src_s++;
		n_bytes--;
	}
	return (dest);
}
