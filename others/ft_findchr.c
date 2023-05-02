#include "libft.h"

int	ft_findchr(char c, char *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (c == array[i])
			return (i);
		i++;
	}
	return (-1);
}
