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
#include <stdlib.h>
#include<bsd/string.h>
#include<stdio.h>

size_t	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}


size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t i = 0;
	if(!src)
		return (size_t)0;
	if(len > ft_strlen(src)){
		return ft_strlen(src);
	}
	while(i <= len -1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s\n", dest);
	return(ft_strlen(src));
}

int	main()
{
	char *dest = "KOKO";
	char *src = "Now we are free!";
	
	char *dest_ = "KOKO";
	char *src_ = "Now we are free!";

	ft_strlcpy(dest, src, 15);
	strlcpy(dest_, src_, 15);

	printf("ft_strlcpy output: %s", dest);
	printf("stndard strlcpy output: %s", dest_);
	return 0;
}
