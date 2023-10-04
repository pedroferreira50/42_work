/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:35:45 by pviegas-          #+#    #+#             */
/*   Updated: 2023/10/04 15:47:11 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
	{
		*p++ = 0;
	}
}

int	main(void)
{
	char	s1[30] = "123456789";
	char	s2[30] = "123456789";
	int	s3[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	bzero(s3, 9);
	ft_bzero(s2, 5);
	printf("%s\n", s1);
	for (int i = 0; i < 10; i++)
            printf("%d ", s3[i]);

	return (0);
}