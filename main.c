/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/11 17:27:33 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include "libft.h"

int main()
{
	char	**split;
	char	s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendi";
	int		i;
	int		j;

	split = ft_split(s, ' ');
	i = 0;
	while (split[i])
	{
		j = 0;
		while (split[i][j])
		{
			printf("%c", split[i][j]);
			j++;
		}
		i++;
	}
	return 0;
}
