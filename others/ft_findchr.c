/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:37:52 by alrobert          #+#    #+#             */
/*   Updated: 2023/05/22 11:40:06 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_findchr(char c, char *array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		if (c == array[i])
			return (i);
		i++;
	}
	return (-1);
}
