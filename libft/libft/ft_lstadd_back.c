/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:19 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 14:54:11 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*templst;

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

/* int	main(void)
{
	int int1 = 5;
	int int2 = 9;
	t_list	*list = ft_lstnew(&int1);
	t_list	*list2 = ft_lstnew(&int2);

	ft_lstadd_back(&list, list2);
	//printf("%d\n", *((int *)(list->content)));
	printf("%d", *((int *)(ft_lstlast(list)->content)));
	return (0);
} */
