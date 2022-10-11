/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/11 12:55:47 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "libft.h"

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main()
{
	char	str[] = " lllorem ipsum dolor sit ametll";
	char	*strtrim;

	strtrim = ft_strtrim(str, "l ");
	printf("%s", strtrim);
	return 0;
}
