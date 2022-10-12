/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:48:58 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/12 17:57:11 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c_nb;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			n *= -1;
			write(fd, "-", 1);
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		c_nb = n % 10 + '0';
		write(fd, &c_nb, 1);
	}
}
