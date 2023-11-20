/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:02:10 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/20 17:43:05 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str = (unsigned char*)s;
	size_t i;
	i = 0;
	
	while(i <= n)
	{
		if (*str == (unsigned char)c)
		{
			return *(&str);
		}
		str++;
		i++;
	}
	return (NULL);
}

int	main()
{
//	char *s = NULL;
//	int c = 'N';

//	printf("ft_ :%p\n", ft_memchr(s, c, 4));
//	printf("std: %p\n", memchr(s, c, 4));

    const char *str5 = NULL;
    int char5 = 'a';
    size_t n5 = 5;
    printf("Test Case 5:\n");
    printf("ft_memchr: %p\n", ft_memchr(str5, char5, n5));
    printf("memchr   : %p\n", memchr(str5, char5, n5));
    printf("\n");
	return 0;
}

