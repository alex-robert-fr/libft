/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:33:23 by alex              #+#    #+#             */
/*   Updated: 2022/10/18 17:55:39 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	is_negative;

	if (!nptr)
		return (0);
	i = 0;
	result = 0;
	is_negative = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 7 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (nptr[i] < 48 || nptr[i] > 57)
		return (result);
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
		result = (result * 10) + ((int)nptr[i++] - 48);
	if (is_negative)
		result *= -1;
	return (result);
}
