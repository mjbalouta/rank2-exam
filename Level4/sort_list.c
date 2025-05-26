#include "ft_list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	int tmp;
	t_list *to_sort;
	int swapped = 1;

	if (!lst)
		return (0);
	while (swapped == 1)
	{
		swapped = 0;
		to_sort = lst;
		while (to_sort->next)
		{
			int result = (*cmp)(to_sort->data, to_sort->next->data);
			if (result == 0)
			{
				tmp = to_sort->data;
				to_sort->data = to_sort->next->data;
				to_sort->next->data = tmp;
				swapped = 1;
	 		} 
			to_sort = to_sort->next;
	}
}
	return (lst);
}
int ascending(int a, int b)
{
	return (a <= b);
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	t_list *lst = malloc(sizeof(t_list));
	t_list *lst1 = malloc(sizeof(t_list));
	t_list *lst2 = malloc(sizeof(t_list));

	lst->next = lst1;
	lst1->next = lst2;
	lst2->next = NULL;

	lst->data = 78;
	lst1->data = 1;
	lst2->data = 0;

	sort_list(lst, ascending);

	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
	free(lst);
	free(lst1);
	free(lst2);
	return (0);
}