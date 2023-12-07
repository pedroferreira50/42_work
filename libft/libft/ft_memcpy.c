/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:20:32 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/07 09:51:15 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	str[] = "ola ola ola";
	char	str2[] = "00000000000";
	
	printf("%s\n", str);
	ft_memcpy(str, str2, 6);
	printf("%s\n", str);
	return (0);
}*/
