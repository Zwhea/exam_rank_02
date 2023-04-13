t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*temp;

	temp = lst;
	while (lst->next != NULL)
	{
		if (((*cmp)(lst->content, lst->next->content)) == 0)
		{
			swap = lst->content;
			lst->content = lst->next->content;
			lst->next->content = swap;
			lst = temp;
		}
		else
			lst = lst->next;
	}
	lst = temp;
	return (lst);
}