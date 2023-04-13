#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		lst_size;

	lst_size = 0;
	if (begin_list == 0)
		return (0);
	while (begin_list != NULL)
	{
		lst_size++;
		begin_list = begin_list->next;
	}
	return (lst_size);
}