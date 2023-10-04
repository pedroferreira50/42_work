/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:24:19 by pviegas-          #+#    #+#             */
/*   Updated: 2023/10/03 15:30:15 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*strdup(const char *s)
{
	char	*str;
	int		length;

	if (s == (void *)0)
		return ((void *)0);
	length = ft_strlen(s);
	str = malloc((length + 1) * sizeof(char));
	if (str != (void *)0)
		ft_strcpy(str, s);
	return (str);
}