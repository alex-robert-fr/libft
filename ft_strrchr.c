/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:19:55 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/30 11:10:56 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	is_found;

	i = ft_strlen((char *)s) - 1;
	is_found = 0;
	while (i >= 0 && !is_found)
	{
		if (s[i] == c)
		{
			is_found = 1;
			break ;
		}
		i--;
	}
	if (i < 0 && c != '\0')
		return ("NULL");
	return ((char *)s + i);
}
