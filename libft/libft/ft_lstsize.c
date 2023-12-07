/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:10 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 11:51:40 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int main(void)
{
	int	int1 = 1;
	t_list	*list = ft_lstnew(&int1);
	int	int2 = 2;

	list->next = ft_lstnew(&int2);
	printf("%d\n", ft_lstsize(list));
	printf("%d\n", *((int *)(list->content)));
}*/
