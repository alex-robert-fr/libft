/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:32:30 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/11 12:58:01 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int		trim(char const *s1, char const *set)
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
				// printf("[%i] %c\n",j , s1[i_start]);
				if (s1[i_start] == set[j])
					find++;
				j++;
			}
			// printf("%i >> %c\n",i_start , s1[i_start]);
		}
		else {
			i_start--;
			break;
		}
		i_start++;
	}
	return (i_start);
}
int		rtrim(char const *s1, char const *set)
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
				// printf("[%i] %c\n",j , s1[i_start]);
				if (s1[i_start] == set[j])
					find++;
				j++;
			}
			// printf("%i >> %c\n",i_start , s1[i_start]);
		}
		else {
			i_start += 2;
			break;
		}
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
	i_start = trim(s1, set);
	i_end = rtrim(s1, set);
	str = (char *)malloc(sizeof(char) * 1000);

	
	// printf("i_start: %i\n", i_start);
	// printf("i_end: %i\n", i_end);
	// printf("j: %i\n", j);
	while (i < (i_end - i_start))
	{
		str[i] = s1[i_start + i];
		i++;
	}
	str[i] = '\0';
	
	return (str);
}

