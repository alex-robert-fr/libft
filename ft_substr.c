/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:20:25 by alex              #+#    #+#             */
/*   Updated: 2022/10/19 16:50:53 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*text;
	size_t		word;

	if (!s)
		return (NULL);
	if (start > (size_t)ft_strlen(s))
	{
		text = ft_calloc(1, sizeof(char));
		if (!text)
			return (NULL);
		return (text);
	}
	if (len + start > (size_t)ft_strlen(s))
		text = ft_calloc((ft_strlen(s) - start + 1), sizeof(char));
	else
		text = ft_calloc((len + 1), sizeof(char));
	if (!text)
		return (NULL);
	word = 0;
	while (s[start] && word < len)
		text[word++] = s[start++];
	return (text);
}
