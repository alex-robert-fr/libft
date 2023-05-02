#include <stdio.h>
#include "../includes/libft.h"

int		count_str_for_alloc(char *c, char *str)
{
	int		i;
	int		is_find;
	char	find_c;
	int		result;

	i = 0;
	is_find = 0;
	result = 0;
	while (str[i])
	{
		if (ft_findchr(str[i], c) != -1)
		{
			if (!is_find)
			{
				is_find = 1;
				find_c = str[i];
				printf("START FIND: %c\n", find_c);
			}
			else if (is_find && str[i] == find_c)
			{
				is_find = 0;
				printf("END FIND: %c\n", find_c);
			}
		}
		if (str[i] != find_c && is_find)
			printf("=> %c\n", str[i]);
		i++;
	}
	return (result/2);
}

char	**alloc_get_between(char *c, char *str)
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
	array = ft_calloc(count_str_for_alloc(c, str) + 1, sizeof(char*));
	while (str[i])
	{
		i++;
	}
	return (array);
}

// "echo" test "salut"
// RETURN :
// ARRAY 1: echo
// ARRAY 2: salut
// ["echo", "salut"]
char	**ft_get_between(char *c, char *str)
{
	int	i;
	int	find_char;
	/*
	int	i_word;
	int	nb_array;
	int	find_bad_char;
	*/
	char	**array;

	i = 0;
	find_char = 0;
	/*
	i_word = 0;
	nb_array = 0;
	find_bad_char = 0;
	*/
	array = alloc_get_between(c, str);
	ft_putstr_fd("GET_BETWEEN\n", 1);
	/*
	while (str[i])
	{
		if (ft_findchr(str[i], c))
			find_char = !find_char;
		i++;
	}
	*/
	return (array);
}
