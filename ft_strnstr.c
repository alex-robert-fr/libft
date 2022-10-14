/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:54:51 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/14 16:39:45 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	little_word(const char *big, const char *little, size_t len, int i)
{
	int	is_cpy;
	int	j;

	is_cpy = 0;
	j = 0;
	while (little[j])
	{
		if (big[i + j] != little[j])
		{
			is_cpy = 0;
			break ;
		}
		else
		{
			if ((i + j) >= (int)len)
				return (0);
			is_cpy = 1;
		}
		j++;
	}
	if (is_cpy)
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	is_cpy;

	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < (int)len)
	{
		if (big[i] == little[0])
		{
			is_cpy = little_word(big, little, len, i);
			if (is_cpy)
				return ((char *)(big + i));
			else
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
