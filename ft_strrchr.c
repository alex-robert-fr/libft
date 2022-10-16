/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:19:55 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/16 18:05:58 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int    i;

    i = ft_strlen((char *)s - 1);
    if (!c)
      return ((char *)s + i + 1);
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)s + i);
        i--;
    }
	return (NULL);
}
