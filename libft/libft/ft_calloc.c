/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:59:49 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 10:55:34 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int main(void)
{
	char	*str = NULL;

	//if (str[0] == '\0')
	//	write(1, "str[0] = \\0\n", 13);
	if(!str)
		write(1, "NULL\n", 6);
	else
		write(1, "Alloc\n", 7);
	str = ft_calloc(1, 1);
	if (str[0] == '\0')
		write(1, "str[0] = \\0\n", 13);
	if(!str)
		write(1, "NULL\n", 6);
	else
		write(1, "Alloc\n", 7);
	return (0);
}*/
