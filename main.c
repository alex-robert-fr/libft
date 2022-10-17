/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/17 18:49:40 by alrobert         ###   ########.fr       */
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
    // printf("Dest: %s\n", dest);
    // printf("Strlcat: %i\n", ft_strlcat(dest, src, 6));
    if (ft_strlcat(dest, src, 6) == 13 && !strcmp(dest, "BBBBA"))
    {
        printf("YES\n");
        printf("Strcmp: %i\n", strcmp(dest, "BBBBA"));
        while (i < 30)
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
