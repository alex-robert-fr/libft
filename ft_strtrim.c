/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:32:30 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/11 13:55:56 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	trim(char const *s1, char const *set)
{
	int		i_start;
	int		find;
	int		j;

	i_start = 0;
	find = 1;
	while (s1[i_start])
	{
		if (find >= 1)
		{
			find = 0;
			j = 0;
			while (set[j])
			{
				if (s1[i_start] == set[j])
					find++;
				j++;
			}
		}
		else
			break ;
		i_start++;
	}
	return (i_start);
}

int	rtrim(char const *s1, char const *set)
{
	int		i_start;
	int		find;
	int		j;

	i_start = ft_strlen(s1) - 1;
	find = 1;
	while (s1[i_start])
	{
		if (find >= 1)
		{
			find = 0;
			j = 0;
			while (set[j])
			{
				if (s1[i_start] == set[j])
					find++;
				j++;
			}
		}
		else
			break ;
		i_start--;
	}
	return (i_start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		i_start;
	int		i_end;

	i = 0;
	i_start = trim(s1, set) - 1;
	i_end = rtrim(s1, set) + 2;
	str = (char *)malloc(sizeof(char) * 1000);
	while (i < (i_end - i_start))
	{
		str[i] = s1[i_start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
