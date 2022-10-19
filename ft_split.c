/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:22:40 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/20 00:36:45 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_size_split(char const *s, char c)
{
	char	**m_str;
	int		rows;
	int		i_rows;
	int		i_columns;
	int		i;
	int		j;
	
	rows = 1;
	i = -1;
	while (s[++i] == c)
		;
	while (++i < (ft_strlen(s) - 1))
		rows += ((s[i] == c) && (s[i + 1] != c));
	m_str = ft_calloc(rows, sizeof(char *));
	if (!m_str)
		return (NULL);
//	printf("Rows: %i\n", rows);
	i = -1;
	j = 0;
	i_rows = 0;
	while (++i <= (ft_strlen(s)))
	{
		if (s[i] != c && s[i])
			j++;
		if (((s[i] == c && (s[i - 1] != c)) || (i == ft_strlen(s))) && j > 0)
		{
//			printf("Columns: %i | Word: %i\n",i , j);
			m_str[i_rows] = ft_calloc(j + 1, sizeof(char));
			if (!m_str[i_rows])
				return (NULL);
			i_columns = -1;
			while (++i_columns < j)
				m_str[i_rows][i_columns] = s[i - j + i_columns];
//			printf("rows -> %i\n", i_rows);
			i_rows++;
			j = 0;
		}
	}

//	printf("rows -> %i\n", i_rows);
	m_str[i_rows] = 0;
	return (m_str);
}

char	**ft_split(char const *s, char c)
{
	char	**str_array;

	if (!s)
		return (NULL);
	str_array = ft_size_split(s, c);
	if (!str_array)
		return (NULL);
	return (str_array);
}
