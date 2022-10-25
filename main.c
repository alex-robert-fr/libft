/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <alrobert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:54:50 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/25 17:35:49 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "libft.h"

void			lstdelone_f(void *d) {
	free(d);
}

int main(void)
{
	t_list	*l = ft_lstnew(strdup("nyancat"));

	l->next = ft_lstnew(strdup("#TEST#"));
	ft_lstclear(&l, lstdelone_f);
	return (0);
}