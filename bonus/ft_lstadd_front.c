/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 09:05:15 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/24 22:10:16 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}		t_list;


void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return;
	
	new->next = *lst;
	*lst = new;
}

int main()
{
	
	t_list *first;
	t_list *second;
	first = malloc(sizeof(t_list));
	second = malloc(sizeof(t_list));
	if (first == NULL || second == NULL)
		return 0;
	first->content = strdup("Y");
	second->content = strdup("X");
	if (first->content == NULL || second->content == NULL)
		return 0;

	ft_lstadd_front(&first, second);
	printf("1:%s\t2:%s\n", (char *)first->content, (char *)second->next->content);
	
	//free(first->content);
	//free(first);
	//free(second->content);
	//free(second);
	return 0;
}

