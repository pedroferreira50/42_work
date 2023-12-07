/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:40:48 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/06 15:05:43 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	char	char1 = 'a';
	char	char2 = 'A';

	printf("%c\n", ft_tolower(char1));
	printf("%c\n", ft_tolower(char2));
	return (0);
}*/