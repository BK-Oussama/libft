/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:44:37 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/20 18:10:31 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{

	if(n == 0)
		return 0;
	
	unsigned char *str1 = (unsigned char*)s1;
	unsigned char *str2 = (unsigned char*)s2;
	
	while(*str1 && *str1 == *str2 && n)
		{
			str1++;
			str2++;
			n--;
		}
	return ((int)(*str1 - *str2));

}

int	main()
{
	char *str1 = "Now we are free!";
	char *str2 = "Now we are Slave?";

	printf("ft_: %d\n", ft_memcmp(str1, str2, 13));
	printf("std_: %d\n", memcmp(str1, str2, 13));
	
	return 0;
}
