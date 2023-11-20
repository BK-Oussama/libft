/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 21:24:41 by ouboukou          #+#    #+#             */
/*   Updated: 2023/11/20 17:00:09 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);

	size_t i;
	
	i = 0;
	while (s1[i] && s1[i] == s2[i] && n)
	{
		i++;
		n--;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	const char *str1 = "Now ke are free!";
	const char *str2 = "Now we are fxee!";
	printf("FT_output: %d\n", ft_strncmp(str1, str2, 5));
	printf("---------------------------------------------\n");
	printf("std_output: %d\n", strncmp(str1, str2, 5));

}
