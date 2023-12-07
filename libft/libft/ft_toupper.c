/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:47:36 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/06 15:04:16 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}
/*
int	main(void)
{
	char	char1 = 'a';
	char	char2 = 'A';

	printf("%c\n", ft_toupper(char1));
	printf("%c\n", ft_toupper(char2));
	return (0);
}*/