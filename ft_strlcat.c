/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:13:32 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/14 15:46:05 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		dst_len;
	int		size;

	dst_len = ft_strlen(dest);
	size = dst_len + ft_strlen(src);
	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	if ((int)n <= dst_len)
		return (ft_strlen(src) + (int)n);
	while (src[i] && i < (n - dst_len - 1))
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (size);
}
