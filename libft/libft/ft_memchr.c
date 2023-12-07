/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:21 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 10:04:03 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (n-- > 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[] = "00000100000";
	char	str2[] = "00000000000";

	printf("%s\n", (char *)ft_memchr(str1, 49, 9));
	printf("%s\n", (char *)ft_memchr(str2, 49, 9));
	return (0);
}*/
