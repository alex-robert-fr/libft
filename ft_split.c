/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alrobert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:22:40 by alrobert          #+#    #+#             */
/*   Updated: 2022/10/21 17:24:32 by alrobert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_set_split(char const *s, char c, char **str_array)
{
	int	len;
	int	i;
	int	letter;
	int	row;
	int	i_letter;
	
	printf("-------------------START ft_set_split---------------------\n");
	len = ft_strlen(s);
	i = 0;
	letter = 0;
	row = 0;
	while (i < len)
	{
		if (s[i] != c && s[i])
		{
			printf("Letter number: %i -> %c\n", letter, s[i]);
			letter++;
		}
		//ERREUR
		if (((s[i] != c && (s[i + 1] == c)) || (i == len && s[i - 1] != c)) && letter > 0)
		{
			if (i == len && s[i])
				letter--;
			str_array[row] = ft_calloc(letter + 1, sizeof(char));
			printf("Calloc: %i\n", letter + 1);
			if (!str_array[row])
				return (NULL);
			i_letter = 0;
			printf("-------------------START calcul letter---------------------\n");
			while (i_letter < letter)
			{
				str_array[row][i_letter] = s[i - letter + i_letter];
				printf("[%i][%i] = s[%i - %i + %i] -> %c\n", row, i_letter, i, letter, i_letter, s[i - letter + i_letter]);
				i_letter++;
			}
			printf("-------------------END calcul letter---------------------\n");
			row++;
			letter = 0;
		}
		i++;
	}
	printf("Row[%i] -> NULL\n", row);
	//str_array[row] = 0;
	printf("-------------------END ft_set_split---------------------\n");
	return (str_array);
}

int	ft_nb_word(char const *s, char c)
{
	int rows;
	int	i;
	int	len;
	
	printf("-------------------START ft_nb_word---------------------\n");
	rows = 1;
	i = 0;
	len = ft_strlen(s);
	while (s[i] == c && s[i] != '\0')
	{
		printf("%i, %c\n", i, s[i]);
		i++;
	}
	while (i <= (ft_strlen(s)))
	{
		printf("i: %i -> %c\n", i, s[i]);
		rows += ((s[i] == c && (s[i - 1] != c)) || (i == len && s[i - 1] != c));
		printf("Rows[%i]\n", rows);
		i++;
	}
	printf("Il y a %i mots en comptant le dernier NULL.\n", rows);
	printf("-------------------END ft_nb_word---------------------\n");
	return (rows);
}

//Verif
char	**ft_split(char const *s, char c)
{
	char	**str_array;
	int	i;

	printf("-------------------START ft_split---------------------\n");
	i = 0;
	if(s)
		while (s[i] != '\0' && s[i] == c)
			i++;
	if (!s || i == ft_strlen(s))
	{
		printf("Calloc 1\n");
		//str_array = ft_calloc(1, sizeof(char *));
		str_array = malloc(sizeof(char *) * 1);
		str_array[0] = NULL;
		printf("-------------------END ft_split---------------------\n");
		if (!str_array)
			return (NULL);
		return (str_array);
	}
	printf("Calloc ft_nb_word\n");
	str_array = ft_calloc(ft_nb_word(s, c), sizeof(char *));
	if (!str_array)
		return (NULL);
	str_array = ft_set_split(s, c, str_array);
	if (!str_array)
		return (NULL);
	printf("-------------------END ft_split---------------------\n");
	return (str_array);
}
