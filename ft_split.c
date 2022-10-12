/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:09:31 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/12 16:30:51 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char	**size_split(char const *s, int strlen, char c)
{
	char	**chr;
	int		i;
	int		rows;

	rows = 1;
	i = 0;
	while (i < (strlen - 1))
	{
		if ((s[i] == c) && (s[i + 1] != c))
			rows++;
		i++;
	}
	chr = (char **)malloc(rows * sizeof(char *));
	i = 0;
	while (i < rows)
	{
		chr[i] = (char *)malloc(50 * sizeof(char));
		i++;
	}
	return (chr);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int		rows;
	int		columns;
	int		strlen;
	int		i;

	rows = 0;
	columns = 0;
	i = 0;
	strlen = ft_strlen(s);
	str_array = size_split(s, strlen, c);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
		{
			str_array[rows][columns] = s[i];
			columns++;
			i++;
		}
		else if (s[i] == c && i < (strlen - 1))
		{
			if (s[i + 1] == c)
			{
				i++;
			}
			else
			{
				str_array[rows][columns] = '\0';
				columns = 0;
				rows++;
				i++;
			}
		}
		else
		{
			break ;
		}
	}
	str_array[rows][columns] = '\0';
	str_array[rows + 1] = 0;
	return (str_array);
}
