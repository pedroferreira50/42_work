/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:26 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 09:58:35 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (n-- > 0)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "123456789";
	char	str2[] = "000000000";
	char	str3[] = "999999999";

	printf("s1 = s2 %d\n", ft_memcmp(str1, str1, 6));
	printf("s1 < s2 %d\n", ft_memcmp(str2, str1, 6));
	printf("s1 > s2 %d\n", ft_memcmp(str3, str1, 6));
	return (0);
}*/
