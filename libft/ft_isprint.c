#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}