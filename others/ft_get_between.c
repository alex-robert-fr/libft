#include <stdio.h>
#include "../includes/libft.h"

int		count_char_for_alloc(char c, char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == c)
			result++;
		i++;
	}
	return (result/2);
}

char	**alloc_get_between(char c, char *str)
{
	char	**array;
	int	i;
	int	i_word;
	int	nb_array;
	int	find_char;

	i = 0;
	i_word = 0;
	nb_array = 0;
	find_char = 0;
	array = ft_calloc(count_char_for_alloc(c, str) + 1, sizeof(char*));
	while (str[i])
	{
		if (str[i] == c)
		{
			if (i_word)
			{
				array[nb_array] = ft_calloc(i_word + 1, 1);
				nb_array++;
			}
			i_word = 0;
			find_char = !find_char;
		}
		if (find_char && str[i] != c)
			i_word++;
		i++;
	}
	return (array);
}

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
	array = alloc_get_between(c, str);
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
