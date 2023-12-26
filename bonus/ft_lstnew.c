/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:17:45 by ouboukou          #+#    #+#             */
/*   Updated: 2023/12/24 12:51:33 by ouboukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}		t_list;


t_list *ft_lstnew(void *content)
{
	t_list *rslt;
	rslt = (t_list *) malloc(sizeof(t_list));
	if (rslt == NULL)
		return (NULL);

	rslt->content = content;
	rslt->next = NULL;

	return (rslt);
}

int main()
{
	
	t_list *new_node = ft_lstnew((void *) (6 * 6));
	printf("the content of the first node: %p\n", new_node->content);
	printf("the adress of NEXT member: %p", new_node->next);
	return 0;
}
