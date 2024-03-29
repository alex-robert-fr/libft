/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:19:56 by alex              #+#    #+#             */
/*   Updated: 2023/02/06 15:46:02 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# ifndef FILES_NUMBER
#  define FILES_NUMBER 1024
# endif
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *c);
void	*ft_calloc(size_t nmemb, size_t size);
char	*get_next_line(int fd);
char	*ft_strchr(char *s, int c);
char	*ft_free(char *buf, char *tmp_buf);
char	*ft_strjoin(char const *s1, char const *s2);
char	*check_read(int end_line, int fd, char *buf, char *tmp_buf);
#endif