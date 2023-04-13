void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	if (begin_list == 0 || *begin_list == 0)
		return ;

	t_list	*lst_ptr;
	lst_ptr = *begin_list;
	if (cmp(lst_ptr->data, data_ref) == 0)
	{
		*begin_list = lst_ptr->next;
		free(lst_ptr);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
	ft_list_remove_if(&lst_ptr->next, data_ref, cmp);
}
