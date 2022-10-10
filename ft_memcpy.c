/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:49:21 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/27 15:24:29 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*start;
	char			*end;
	unsigned int	i;

	start = src;
	end = dest;
	i = 0;
	while (i < n)
	{
		end[i] = start[i];
		i++;
	}
	return (dest);
}
