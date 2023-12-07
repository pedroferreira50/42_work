/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:21:11 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/06 16:28:59 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	ft_function(unsigned int n, char *c)
{
	n = 1;
	*c = *c + n;
}

int	main(void)
{
	char	str[20] = "0123456789";
	
	ft_striteri(str, &ft_function);
	printf("%s\n", str);
	return (0);
}*/
