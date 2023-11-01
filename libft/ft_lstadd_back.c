#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *templst;

	if (*lst != NULL)
	{
		templst = *lst;
		while (templst->next != NULL)
			templst = templst->next;
		templst->next = new;
	}
	else
		*lst = new;
}
	