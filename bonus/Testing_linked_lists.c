
#include<stdlib.h>
#include<stdio.h>

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
}		t_list;

int main()
{
    t_list *first_node;
    first_node = malloc(sizeof(t_list));
    first_node -> content = "99";
    first_node -> next = NULL;
    t_list *curent = malloc(sizeof(t_list));
    curent -> content = "42";
    curent -> next = NULL;
    first_node -> next = curent;

    printf("The content of second node is :%s\t the next node for it is: %p", (char *)first_node->content,first_node->next);
    return 0;
}