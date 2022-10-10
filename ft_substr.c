/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:20:25 by alex              #+#    #+#             */
/*   Updated: 2022/10/09 18:20:06 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *text;
    size_t word;

    text = malloc((len) * sizeof(char));
    word = 0;
    while(s[start] && word < len) {
        // printf("word: %i / len: %li\n", word, len);
        text[word] = s[start];
        word++;
        start++;
    }
    return (text);
}