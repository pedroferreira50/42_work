/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:00:33 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 15:19:04 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
/*
void	delete(void *content)
{
	free(content);
}

int main() 
{
	int *data;
	data = malloc(sizeof(int));
	*data = 10;
	
    t_list *list = ft_lstnew(data);

    printf("Before deletion: %d\n", *((int *)list->content));
    ft_lstdelone(list, &delete);
	//	if (list)
	//		printf("exists");
    return (0);
}*/
