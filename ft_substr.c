/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:20:25 by alex              #+#    #+#             */
/*   Updated: 2022/10/11 14:06:21 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*text;
	size_t		word;

	text = (char *)malloc(1 * sizeof(char));
	if ((int)start > ft_strlen(s))
	{
		text[0] = '\0';
		return (text);
	}
	text = (char *)malloc((len + 1) * sizeof(char));
	if (text == NULL)
		return (0);
	word = 0;
	while (s[start] && word < len)
	{
		text[word] = s[start];
		word++;
		start++;
	}
	text[word] = '\0';
	return (text);
}
