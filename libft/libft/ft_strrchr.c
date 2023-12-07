/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:17:44 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/06 15:24:00 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = NULL;
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if (*s == (char)c)
		p = (char *)s;
	return (p);
}
/*
int	main(void)
{
	char	c = '3';
	char	*str = "a1a2a3a4a5a6a7a8a9";
	printf("%s", ft_strrchr(str, c));
	return (0);
}*/