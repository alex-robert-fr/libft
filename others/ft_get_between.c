#include <stdio.h>
#include "../includes/libft.h"


// "echo" test "salut"
// RETURN :
// ARRAY 1: echo
// ARRAY 2: salut
// ["echo", "salut"]
char	**ft_get_between(char c, char *str)
{
	int	i;
	int	i_word;
	int	nb_array;
	int	find_char;
	char	**array;

	i = 0;
	i_word = 0;
	nb_array = 0;
	find_char = 0;
	array = ft_calloc(3, sizeof(char*));
	array[0] = ft_calloc(6, 1);
	array[1] = ft_calloc(6, 1);
	array[2] = ft_calloc(1, 1);
	ft_putstr_fd("GET_BETWEEN\n", 1);
	while (str[i])
	{
		if (str[i] == c)
		{
			if (i_word)
				nb_array++;
			i_word = 0;
			find_char = !find_char;
		}
		if (find_char && str[i] != c)
		{
			printf("%i => %i: %c\n", nb_array, i_word, str[i]);
			array[nb_array][i_word] = str[i];
			i_word++;
		}
		i++;
	}
	return (array);
}
