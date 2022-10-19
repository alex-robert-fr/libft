/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/19 14:04:55 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
#include "libft.h"

int main()
{
	char *s1 = "  \t \t \n   \n\n\n\t";
	char *s2 = "";
	// printf("len -> %i", ft_strlen(s1));
	char	*ret = ft_strtrim(s1, " \n\t");
	if(!strcmp(ret, s2))
		printf("YES");
	else
		printf("NO");
	return 0;
}
