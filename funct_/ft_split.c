/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:38:57 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/20 18:16:21 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	if (s == NULL)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**rslt;
	size_t	start;
	size_t	end;
	size_t	i;

	rslt = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (rslt == NULL || s == NULL)
		return (0);
	start = 0;
	i = 0;
	while (i < count_words(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
		{
			end++;
		}
		rslt[i] = ft_substr(s, start, (end - start));
		start = end;
		i++;
	}
	rslt[i] = 0;
	return (rslt);
}
