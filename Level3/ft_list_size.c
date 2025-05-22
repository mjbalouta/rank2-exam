#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i = 0;

	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}
#include <stdio.h>
int main(void)
{
	t_list *begin_list = malloc(sizeof(t_list));
	t_list *list1 = malloc(sizeof(t_list));
	t_list *list2 = malloc(sizeof(t_list));

	begin_list->next = list1;
	list1->next = list2;
	list2->next = NULL;
	int result = ft_list_size(begin_list);
	printf("%d\n", result);

	free(begin_list);
	free(list1);
	free(list2);
}