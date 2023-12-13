/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:13:41 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/16 19:42:30 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdio.h>
#include<string.h>

void	*ft_memmove(void *dest, const void *src, size_t n_bytes)
{
	unsigned char		*dest_d;
	const unsigned char	*src_s;

	dest_d = (unsigned char *)dest;
	src_s = (const unsigned char *)src;
	if (dest_d == src_s || n_bytes == 0)
		return (dest);
	if (dest_d < src_s || dest_d >= src_s + n_bytes)
	{
		ft_memcpy(dest_d, src_s, n_bytes);
	}
	else
	{
		dest_d = n_bytes + dest_d;
		src_s = n_bytes + src_s;
		while (n_bytes)
		{
			dest_d--;
			src_s--;
			*dest_d = *src_s;
			n_bytes--;
		}
	}
	return (dest);
}
