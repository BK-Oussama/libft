/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:36:30 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/20 20:57:29 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strnstr(const char *str, char *to_find, size_t len)
{
	if (*to_find == '\0')
		return (char *)(str);
	
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	while (*str && i < len)
	{
		if(str[i] == to_find[j] && to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
			{
				return (char *)(&str[i - j]);
			}	
		}
		else
		{
			j = 0;
			i++;
		}
	
	}
	return NULL;
}

int	main()
{
	const char *hay = "Heey,[me!] Now we are frey!";
	const char *ndl = "[me!";
	
	printf("ft_: %s\n", ft_strnstr(hay, ndl, 10));
	printf("std_: %s\n", strnstr(hay, ndl, 10));
	return 0;
}

