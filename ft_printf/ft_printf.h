/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 22:15:59 by alrobert          #+#    #+#             */
/*   Updated: 2022/11/16 15:45:57 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define MAX_TYPE 9
# define MAX_CONVERT 9

# include <stdarg.h>
# include <stdlib.h>
# include "ft_printf_proto_struct.h"

int				ft_printf(const char *str, ...);
int				check_flag(const char *flag, t_info_cur_arg *info);
int				get_margin(const char *str, t_info_cur_arg *info);
void			ft_puthexa(unsigned long nbr, int is_maj_or_min);
void			ft_putmargin(t_info_cur_arg *info);
void			check_args(const char *str, va_list args, t_info_cur_arg *arg);
void			c_convert(void *arg, t_info_cur_arg *info);
void			s_convert(void *arg, t_info_cur_arg *info);
void			p_convert(void *arg, t_info_cur_arg *info);
void			d_convert(void *arg, t_info_cur_arg *info);
void			x_convert(void *arg, t_info_cur_arg *info);
void			xx_convert(void *arg, t_info_cur_arg *info);
void			prc_convert(void *arg, t_info_cur_arg *info);
void			check_convert_c(const char c, void *arg, t_info_cur_arg *info);
t_arg_type		get_type(const char flag);
t_arg_type		check_type(const char *str);
t_info_cur_arg	create_info_arg_struct(void);
const t_convert	*create_convert_struct(void);

#endif
