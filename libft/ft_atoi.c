#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	minus;

	i = 0;
	j = 0;
	minus = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			minus = -1;
		i++;
	}		
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		j = j + (nptr[i] - '0');
		if (nptr[i + 1] != '\0' && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
			j = j * 10;
		i++;
	}
	return (j * minus);
}