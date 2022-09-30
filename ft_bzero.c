/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:02:11 by alrobert          #+#    #+#             */
/*   Updated: 2022/09/27 14:45:12 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	char			*str;

	str = s;
	i = 0;
	while ((str + i) && i < n)
	{
		str[i] = '\0';
		i++;
	}
}
