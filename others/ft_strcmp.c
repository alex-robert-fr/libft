/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 11:59:08 by alex              #+#    #+#             */
/*   Updated: 2023/06/02 11:59:11 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
 {
 	int	i;
 
 	i = 0;
 	while (s1[i] == s2[i] && s1[i] && s2[i])
 		i++;
 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
 }