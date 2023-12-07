/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:42 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 14:25:36 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/* int	main(void)
{
	int int1 = 1;
	int int2 = 2;
	t_list	*list = ft_lstnew(&int1);

	list->next = ft_lstnew(&int2);
	printf("%d", *((int *)(ft_lstlast(list)->content)));
	
	return (0);
} */
