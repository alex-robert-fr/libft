/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:09:31 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/11 17:24:45 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int	rows;
	int	columns;
	int	str_len;
	int	i;
	int	j;

	rows = 1;
	columns = 0;
	str_len = ft_strlen(s);
	i = 0;
	j = 0;
	while (s[i] && i < str_len - 1)
	{
		if ((s[i] == c) && (s[i + 1] != c))
			rows++;
		i++;
	}
	str_array = (char **)malloc(rows * sizeof(char *));
	i = 0;
	printf("len: %i\n", ft_strlen(s) - 1);
	while (s[i])
	{
		if ((s[i] != c) && i != (ft_strlen(s) - 1))
		{
			printf("i: %i\n", i);
			columns++;
		}
		else
		{
			str_array[j] = (char *)malloc(columns * sizeof(char));
			printf("Malloc[%i]\n", j);
			columns = 0;
			j++;
		}
		i++;
	}
	i = 0;
	rows = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str_array[rows][columns] = s[i];
			columns++;
		}
		else
		{
			columns = 0;
			rows++;
		}
		i++;
	}
	/*
	printf("Rows: %i\n", rows);
	printf("Columns: %i\n", columns);
	*/
	return(str_array);
}
