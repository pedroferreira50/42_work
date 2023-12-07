/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:28 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 15:33:40 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*templst;
	t_list	*next;

	if (*lst == NULL || del == NULL)
		return ;
	templst = *lst;
	next = NULL;
	while (templst != NULL)
	{
		next = templst->next;
		del(templst->content);
		free(templst);
		templst = next;
	}
	*lst = NULL;
}
/*
void	delete(void *content)
{
	free(content);
}

int	main(void)
{
	int *int1;
	int1 = malloc(sizeof(int));
	*int1 = 10;
	int *int2;
	int2 = malloc(sizeof(int));
	*int2 = 20;
	t_list	*list = ft_lstnew(int1);
	t_list	*list2;
	list->next = (list2 = ft_lstnew(int2));

	printf("%d\n", *((int *)(list->content)));
	printf("%d\n", *((int *)(list2->content)));
	ft_lstclear(&list, &delete);
	//printf("%d\n", *((int *)(list->content)));
	
	return (0);
} */
