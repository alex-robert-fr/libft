/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/20 00:38:32 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
#include <limits.h>
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
	char	**tabstr;
	int		i;
	int		j;

	i = 0;
	if (!(tabstr = ft_split("  tripouille  42  ", ' ')))
		ft_print_result("NULL");
	else
	{
		while (i < 3)
		{
			if (!tabstr[i])
			{
				printf("NULL\n");
			}
			else{
				printf("%s\n", tabstr[i]);
			}
			printf("-------------\n");
			
			i++;
		}
	}
	if (malloc_usable_size(tabstr)== sizeof(char *) * 3)
		printf("YES");
	else
		printf("NO");
	// printf("%i\n", malloc_usable_size(tabstr));
	// printf("%i\n", sizeof(char *) * 3);
	return 0;
}
