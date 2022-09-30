/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:12:15 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/29 17:25:30 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				len_src;
	int				len_dst;

	i = 0;
	len_src = ft_strlen((char *)src);
	len_dst = ft_strlen((char *)dst);
	if (size == 0)
		return (len_src);
	while ((int)i < len_dst || i < size)
	{
		if ((int)i < len_src && i < size)
			dst[i] = src[i];
		if ((int)i == len_src || i == size - 1)
			dst[i] = '\0';
		i++;
	}
	while (i < size - 1)
	{
		dst[i] = '\0';
		i++;
	}
	return (len_src);
}
