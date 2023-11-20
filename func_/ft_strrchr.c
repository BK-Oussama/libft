/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:42:33 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/18 21:17:29 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char *ft_strrchr(const char *s, int arg)
{
	size_t len;

	len = strlen(s);
	while(len)
	{
		if(*(s + len) == (char)arg)
		return ((char *)(s + len));
		len--;
	}
	return (NULL);
/*	while (*s && *s != (char)arg)
	{
		s++;
	}
	if (*s == (char)arg)
	{
		return ((char *)s);
	}
	while (*s)
	{
		s--;
		if(*s == (char)arg)
		{
			return ((char *)s);
		}
	}
	return (NULL);
*/	
}

int	main()
{
	const char *str = 0x0;
	char c = '\0';
	printf("ft_output:(%s)\n--------------------------", ft_strrchr(str, c));
	printf("\nstd_output:(%s)", strrchr(str, c));
	return 0;

}
