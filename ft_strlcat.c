/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:13:32 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/17 18:53:05 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t		dst_len;

	if (n == 0)
		return (ft_strlen(src));
	dst_len = (size_t)ft_strlen(dest);
	i = 0;
	if (n <= dst_len)
		return (ft_strlen(src) + n);
	while (src[i] && i < (n - dst_len - 1))
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = 'i';
	return (dst_len + ft_strlen(src));
}
