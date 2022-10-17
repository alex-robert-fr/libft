/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/17 18:30:45 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main()
{
    char src[] = "cou";
	char dest[20]; memset(dest, 'A', 20);
    int i = 0;
    // printf("%s\n",dest);
    // printf("fryefghrag: %li\n", strlcpy(dest, src, -1));
    // while (i <= strlen(src) + 1)
    // {
    //     printf("%c", dest[i]);
    //     i++;
    // }
    if (strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A')
    {
        printf("YES\n");
        // printf("Strlcpy: %li\n", strlcpy(dest, src, -1));
        printf("Strlen: %i\n", strlen(src));
        printf("Strcmp: %i\n", strcmp(src, dest));
        printf("dest: %c\n", dest[strlen(src)]);
        while (i <= strlen(src) + 1)
        {
            printf("-> %c\n", dest[i]);
            i++;
        }
        
    }
    else
    {
        printf("NO\n");
        printf("Strlcpy: %li\n", ft_strlcpy(dest, src, -1));
        printf("Strlen: %li\n", strlen(src));
        printf("Strcmp: %li\n", strcmp(src, dest));
        printf("dest: %li\n", dest[strlen(src) + 1]);
    }
    
    
    
	return 0;
}
