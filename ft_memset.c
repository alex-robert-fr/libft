/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:39:38 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/27 14:14:25 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int n)
{
	unsigned int	i;
	char			*str;

	str = s;
	i = 0;
	while ((str + i) && i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
