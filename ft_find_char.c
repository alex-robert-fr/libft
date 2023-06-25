/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:08:41 by alrobert          #+#    #+#             */
/*   Updated: 2023/06/25 14:08:47 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_char(char c, char *chars)
{
	int	i;
	int	i_chars;

	i = 0;
	i_chars = 0;
	while (chars[i_chars])
	{
		if (c == chars[i_chars])
			i = -1;
		i_chars++;
	}
	return (i);
}
