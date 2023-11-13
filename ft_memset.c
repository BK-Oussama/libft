/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:09:01 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/04 22:44:02 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memset(void *s, int value, size_t n_byt)
{
	int i;
 
	i = s;
	while (i < n_byt)
	{
		*s = value;
		i++;
	}
}

int	main()
{
	char *ptr = "Now we are free!";
	printf("befor memset: %s\n", ptr);
	printf("after memset:\n");
	memset(ptr, 42, 3);
	ft_memset(ptr, 42, 3);
	printf("my func otpt: %s\n", ptr);
	printf("std func otpt: %s", ptr);
	return (0);
}
