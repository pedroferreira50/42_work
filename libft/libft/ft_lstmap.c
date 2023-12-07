/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:49 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 15:31:23 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*templst;

	if (!f || !del)
		return (NULL);
	newlst = NULL;
	templst = NULL;
	while (lst != NULL)
	{
		templst = ft_lstnew(f(lst->content));
		if (templst == NULL)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, templst);
		lst = lst->next;
	}
	return (newlst);
}

/* void	addone(int	*n)
{
	*n = *n +1;
}

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

void	delete(void *content)
{
	free(content);
}

int	main(void)
{
	int int1 = 5;
	int int2 = 8;
	t_list	*list = ft_lstnew(&int1);
	t_list	*list2 = ft_lstnew(&int2);

	list->next = list2;
	ft_lstmap(list, addone, ft_lstclear);
	printf("%d\n", *((int *)(list->content)));
	printf("%d\n", *((int *)(list2->content)));
	
	return (0);
} */
