/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/18 14:54:32 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main()
{
    char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
    int i = 0;
    memset(dest, 'B', 4);
    int strlct = ft_strlcat(dest, src, 3);
    if (strlct == 3 + strlen(src) && !strcmp(dest, "BBBB"))
    {
        printf("YES\n");
        printf("Strlcat: %i -> len: %i\n", strlct, (3 + strlen(src)));
        printf("Strcmp: %i\n", strcmp(dest, "B"));
        while (i < 30)
        {
            printf("-> %c\n", dest[i]);
            i++;
        }
    }
    else
    {
        printf("NO\n");
        printf("Strlcat: %i -> len: %i\n", strlct, (3 + strlen(src)));
        printf("Strcmp: %i\n", strcmp(dest, "B"));
        while (i < 30)
        {
            printf("-> %c\n", dest[i]);
            i++;
        }
    }
    

    // char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    // char buff1[0xF00] = "there is no stars in the sky";
    // char buff2[0xF00] = "there is no stars in the sky";
    // size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
    // size_t r1 = strlcat(buff1, str, max);
    // size_t r2 = ft_strlcat(buff2, str, max);
    // char s1[4] = "";
    // char s2[4] = "";
    // r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
    // r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);
    // printf("S1: %s\n",s1);
    // printf("S2: %s\n",s2);

    
    
	return 0;
}
