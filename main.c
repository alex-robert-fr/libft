/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/21 17:16:34 by alrobert         ###   ########.fr       */
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

// int	mcheck(void *p, size_t require_size)
// {
// 	void *p2 = malloc(require_size);
// 	if (malloc_usable_size(p) == malloc_usable_size(p2))
// 		return (1);
// 	return (0);
	
// }

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
    char **tab;
    char *splitme;
    int i = -1;
    

    // splitme = strdup("Tripouille ");
	tab = ft_split(" Tripouille", ' ');
    //tab[2] fonctionne ?
	// if (tab[1] == NULL)
    //     printf("YES");
    // while (str[++i])
    // {    
    //     printf("%s", str[0]);
    // }
    // i = -1;
    while (tab[++i] != NULL)
        free(tab[i]);
    free(tab);
	return 0;
}
