/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/18 15:03:36 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main()
{
    // char dest[30]; memset(dest, 0, 30);
	// char * src = (char *)"AAAAAAAAA";
    // int i = 0;
    // memset(dest, 'B', 4);
    // int strlct = ft_strlcat(dest, src, 3);
    // if (strlct == 3 + strlen(src) && !strcmp(dest, "BBBB"))
    // {
    //     printf("YES\n");
    //     printf("Strlcat: %i -> len: %i\n", strlct, (3 + strlen(src)));
    //     printf("Strcmp: %i\n", strcmp(dest, "B"));
    //     while (i < 30)
    //     {
    //         printf("-> %c\n", dest[i]);
    //         i++;
    //     }
    // }
    // else
    // {
    //     printf("NO\n");
    //     printf("Strlcat: %i -> len: %i\n", strlct, (3 + strlen(src)));
    //     printf("Strcmp: %i\n", strcmp(dest, "B"));
    //     while (i < 30)
    //     {
    //         printf("-> %c\n", dest[i]);
    //         i++;
    //     }
    // }
    
    char	*dest;

	dest = (char *)malloc(sizeof(*dest) * 15);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);

    memset(dest, 'r', 15);
	ft_strlcat(dest, "lorem ipsum dolor sit amet", 5);

    
    
	return 0;
}
