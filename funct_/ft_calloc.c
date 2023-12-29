/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:35:48 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/19 12:16:53 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t n_elm, size_t elm_size)
{
	void	*ptr;

	if (elm_size && n_elm >= SIZE_MAX / elm_size)
		return (NULL);
	ptr = malloc(n_elm * elm_size);
	if (ptr != NULL)
		ft_bzero(ptr, n_elm * elm_size);
	return (ptr);
}
