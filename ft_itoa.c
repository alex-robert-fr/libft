/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:50:57 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/13 18:08:55 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	num_len(int n)
{
	int	size;

	size = 0;
	if (n > 0)
		size = 0;
	else
	{
		size = 1;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		size++;
	}
	size++;
	return (size);
}

char	*nbr_to_str(int n, int i, int is_negative, char *str)
{
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		if (is_negative && i == 0)
			str[i] = '-';
		else
		{
			str[i] = n % 10 + '0';
			n /= 10;
		}
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		is_negative;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	size = num_len(n);
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	else
		is_negative = 0;
	str = malloc(size + 1 * sizeof(char));
	str = nbr_to_str(n, size, is_negative, str);
	return (str);
}
