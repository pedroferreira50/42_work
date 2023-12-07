/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:23 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 14:55:28 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

/* int	main(void)
{
	int int1 = 5;
	int int2 = 9;
	t_list	*list = ft_lstnew(&int1);
	t_list	*list2 = ft_lstnew(&int2);

	ft_lstadd_front(&list, list2);
	printf("%d\n", *((int *)(list->content)));
	printf("%d", *((int *)(ft_lstlast(list)->content)));
	return (0);
} */
