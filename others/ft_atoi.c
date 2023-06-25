/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:33:23 by alex              #+#    #+#             */
/*   Updated: 2023/06/22 15:40:43 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_atoi(const char *nptr)
{
	int		i;
	long	result;
	int		is_negative;

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
	else if (nptr[i] == '+')
		i++;
	else if (nptr[i] < 48 || nptr[i] > 57)
		return (result);
	while (nptr[i] && (nptr[i] >= 48 && nptr[i] <= 57))
		result = (result * 10) + ((int)nptr[i++] - 48);
	if (is_negative)
		result *= -1;
	if (result > 0x7FFFFFFF || result < -2147483648)
		return (0);
	return (result);
}
