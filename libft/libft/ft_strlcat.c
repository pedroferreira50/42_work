/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pviegas- <pviegas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:29:40 by pviegas-          #+#    #+#             */
/*   Updated: 2023/12/06 16:19:01 by pviegas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	dest_length = 0;
	src_length = 0;
	i = 0;
	while (dest[dest_length] != '\0')
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	j = dest_length;
	if (dest_length < size - 1 && size > 0)
	{
		while (i + dest_length < size - 1 && src[i] != '\0')
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}
/*
int main(void)
{
    char dest[20] = "Hello";
    const char *src = " world!";
    size_t dest_size = sizeof(dest);

    printf("Original dest: %s\n", dest);

    size_t result = ft_strlcat(dest, src, 10);

    printf("Concatenated string: %s\n", dest);
    printf("Return value: %zu\n", result);

    return 0;
}
*/