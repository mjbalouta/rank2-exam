#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *to_free;

	if (!begin_list || !*begin_list)
		return ;
	current = *begin_list;
	while (current && current->next)
	{
		if (((*cmp)(data_ref, current->next->data) == 0))
		{
			to_free = current->next;
			current->next = current->next->next;
			free(to_free);
		}
		else
			current = current->next;
	}
	current = *begin_list;
	if (current && ((*cmp)(data_ref, current->data) == 0))
	{
		*begin_list = current->next;
		free(current);
	}
}
