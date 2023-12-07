/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:38 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 14:01:03 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	addone(int	*n)
{
	*n = *n +1;
}

int	main(void)
{
	int int1 = 5;
	int int2 = 8;
	t_list	*list = ft_lstnew(&int1);
	t_list	*list2 = ft_lstnew(&int2);

	list->next = list2;
	ft_lstiter(list, addone);
	printf("%d\n", *((int *)(list->content)));
	printf("%d\n", *((int *)(list2->content)));
	
	return (0);
} */