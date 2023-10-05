#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	i = 0;
	while (n-- < 0)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	return (dest);
}