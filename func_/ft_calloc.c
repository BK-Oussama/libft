/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:35:48 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/03 17:45:42 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t n_elm, size_t elm_size)
{
	size_t	total_size;
	size_t	size_max;
	void	*ptr;

	if (n_elm == 0 || elm_size == 0)
		return (NULL);
	size_max = SIZE_MAX;
	total_size = n_elm * elm_size;
	if (total_size >= size_max)
		return (NULL);
	else
	{
		ptr = malloc(total_size);
	}
	if (ptr == NULL)
		return (NULL);
	else
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}
