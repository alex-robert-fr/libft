/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:19:22 by alex              #+#    #+#             */
/*   Updated: 2023/05/22 11:54:54 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if ((nmemb * size / nmemb) != size)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		i;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = -1;
	result = ft_calloc((len_s1 + len_s2 + 1), sizeof(char));
	if (result == NULL)
		return (0);
	while (s1[++i])
		result[i] = s1[i];
	i = -1;
	while (s2[++i])
		result[i + len_s1] = s2[i];
	return (result);
}

char	*ft_strchr(char *s, int c)
{
	int	i;
	int	is_found;

	i = 0;
	is_found = 0;
	while (s[i] && !is_found)
	{
		if (s[i] == (unsigned char)c)
		{
			is_found = 1;
			break ;
		}
		i++;
	}
	if (is_found || (s[i] == '\0' && (unsigned char)c == '\0'))
		return ((char *)s + i + 1);
	return (NULL);
}

char	*check_read(int end_line, int fd, char *buf, char *tmp_buf)
{
	int		bytes_read;
	int		i_check_buf;

	while (!end_line)
	{
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		i_check_buf = 0;
		while (buf[i_check_buf])
			if (buf[i_check_buf++] == '\n')
				end_line = 1;
		tmp_buf = ft_free(buf, tmp_buf);
		buf = ft_calloc(BUFFER_SIZE + 1, 1);
		if (!tmp_buf || !buf)
			return (NULL);
	}
	if (!bytes_read || buf)
		free(buf);
	if (!tmp_buf[0])
	{
		free(tmp_buf);
		tmp_buf = NULL;
	}
	return (tmp_buf);
}
