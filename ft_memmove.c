/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:24:59 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/28 10:10:26 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*start;
	char		*end;
	int			i;

	start = src;
	end = dest;
	if (ft_strlen((char *)dest) < ft_strlen((char *)src))
	{
		i = n - 1;
		while (i >= 0)
		{
			end[i] = start[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)n)
		{
			end[i] = start[i];
			i++;
		}
	}
	return (dest);
}
