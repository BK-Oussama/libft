/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:35:26 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/03 18:44:27 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

size_t	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char *s = "Now we are free!";

	printf("my func otpt:%ld \n", ft_strlen(s));
	printf("std func otpt:%ld", strlen(s));
	return 0;

}
