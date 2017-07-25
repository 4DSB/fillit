/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 23:06:36 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:58:25 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to split.
**				2. The delimiter character.
** Operation:	Allocates (with malloc(3)) and returns an array of “fresh”
**				strings (all ending with ’\0’, including the array itself)
**				obtained by spliting s using the character c as a delimiter.
**				Example: ft_strsplit("*hello*fellow***students*", ’*’) returns
**				the array ["hello", "fellow", "students"].
** Return:		The array of “fresh” strings result of the split.
**				NULL, if the allocation fails the function.
*/

#include <stdlib.h>

#include "libft.h"

char		**ft_strsplit(char const *str, char c)
{
	unsigned	i;
	unsigned	count;
	char		**strarr;

	if (!str)
		return (NULL);
	while (*str && *str == c)
		++str;
	i = 0;
	count = ft_count_words(str, c);
	if (((strarr = (char **)malloc((count + 1) * sizeof(char *)))) == NULL)
		return (NULL);
	while (i < count + 1)
	{
		strarr[i] = ft_strnew(ft_word_length(str, c));
		ft_word_copy(strarr[i], str, c);
		str = ft_next_word(str, c);
		i++;
	}
	strarr[count] = 0;
	return (strarr);
}
