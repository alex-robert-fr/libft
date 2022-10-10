/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:32:30 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/10 19:16:46 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		*start;
	int		*end;
	int		len_str;
	int		i;

	start = (int)ft_strlen(ft_strchr(s1, set[0]) + 1);
	end = ft_strlen(ft_strrchr(s1, set[0]));
	len_str = ft_strlen(s1);
	i = 0;
	str = (char *)malloc(sizeof(char) * (start - end + 1));
	while (s1[i] && i < (start - end))
	{
		str[i] = (s1 + (int)(start + i));
		i++;
	}

	return (str);
}

