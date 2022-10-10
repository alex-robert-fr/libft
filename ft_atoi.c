/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:33:23 by alex              #+#    #+#             */
/*   Updated: 2022/10/05 17:33:25 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	is_negative;

	i = 0;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 7 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		is_negative = 1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		is_negative = 0;
		i++;
	}
	else if (nptr[i] < 48 || nptr[i] > 57)
		return (result);
	while(nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
	{
		result *= 10;
		result += (int)nptr[i] - 48;
		i++;
	}
	if (is_negative)
		result *= -1;
	return (result);
}
