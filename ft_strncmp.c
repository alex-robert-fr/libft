/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:14:20 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/30 11:31:45 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i] || i < (int)n)
		i++;
	if (s1[i] > s2[i])
		return -1;
	if (s1[i] < s2[i])
		return 1;
	return 0;
}
