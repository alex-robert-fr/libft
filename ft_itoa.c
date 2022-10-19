/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:50:57 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/19 16:47:31 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	if (n == 0 || n == -2147483648)
	{
		if (n == 0)
			str = ft_strdup("0");
		else
			str = ft_strdup("-2147483648");
		return (str);
	}
	size = num_len(n);
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	str = nbr_to_str(n, size, is_negative, str);
	return (str);
}
