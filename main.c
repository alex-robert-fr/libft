/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/19 12:49:41 by alrobert         ###   ########.fr       */
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
	// char *ptr = ft_calloc(0, sizeof(char));
	// if (!ptr)
	// {
	// 	printf("NULL");
	// 	return (0);
	// }
	
	// for (size_t i = 0; i < 25; i++)
	// {
	// 	ptr[i] = 'a';
	// }
	// for (size_t i = 0; i < 25; i++)
	// {
	// 	printf("i: %li -> %c\n", i, ptr[i]);
	// }
	// a * b / a = b
	// size_t s = SIZE_MAX;
	// printf("SIZE_MAX: %li",SIZE_MAX);
	void * p = calloc(30, 1);
	char *str = strdup("0123456789");
	char *s = ft_substr(str, 9, 10);

	printf("%li", malloc_usable_size(p));
	// printf("Check: %i", ft_memcmp(p, e, 4));
	// /* 1 */ check(!memcmp(p, e, 4));
	// /* 2 */ mcheck(p, 4); free(p); showLeaks();
	// /* 3 */ check(ft_calloc(SIZE_MAX, SIZE_MAX) == NULL);
	
	
	return 0;
}
