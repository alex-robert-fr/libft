/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:09:31 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/19 17:01:00 by alrobert         ###   ########.fr       */
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
	chr = ft_calloc(rows, sizeof(char *));
	if (!chr)
		return (NULL);
	i = -1;
	while (++i < rows)
	{
		chr[i] = ft_calloc(50, sizeof(char));
		if (!chr[i])
			return (NULL);
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

	if (!s)
		return (NULL);
	rows = 0;
	columns = 0;
	i = 0;
	strlen = ft_strlen(s);
	str_array = size_split(s, strlen, c);
	if (!str_array)
		return (NULL);
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
	str_array[rows + 1] = 0;
	return (str_array);
}
