/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:44:59 by alex              #+#    #+#             */
/*   Updated: 2023/06/03 14:47:08 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_char(char c, char *chars)
{
	int	i_chars;

	i_chars = 0;
	while (chars[i_chars])
	{
		if (c == chars[i_chars])
			return (-1);
		i_chars++;
	}
	return (0);
}
