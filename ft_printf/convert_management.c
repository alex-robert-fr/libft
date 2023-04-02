/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_management.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:25:32 by alrobert          #+#    #+#             */
/*   Updated: 2022/11/16 15:04:36 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft.h"

void	check_convert_c(const char letter, void *arg, t_info_cur_arg *info)
{
	const t_convert	*c;
	int				i;

	i = 0;
	c = create_convert_struct();
	while (i < MAX_CONVERT)
	{
		if (c[i].convert == letter)
		{
			if ((letter == 'd' || letter == 'i') && info->_int < 0)
			{
				ft_putchar_fd('-', 1);
				info->_int *= -1;
			}
			if (!info->justify_left && info->margin)
				ft_putmargin(info);
			c[i].cb(arg, info);
			if (info->justify_left && info->margin)
				ft_putmargin(info);
			return ;
		}
		i++;
	}
}
