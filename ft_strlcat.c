/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:13:32 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/18 14:58:19 by alrobert         ###   ########.fr       */
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
	/*
	printf("Destlen: %i\n", dst_len);
	printf("Srclen: %i\n", ft_strlen(src));
	printf("Srclen + Destlen: %i\n", ft_strlen(src) + dst_len);
	*/
	i = 0;
	while (src[i] && (i + dst_len) < (n - 1))
	{
		dest[i + dst_len] = src[i];
		i++;
	}
	dest[i + dst_len] = '\0';
//	printf("Pass HERE\n");
//	printf("Srclen + Destlen: %i\n", ft_strlen(src) + dst_len);
	if (n < dst_len)
		return (ft_strlen(src) + n);
	return (ft_strlen(src) + dst_len);
}
