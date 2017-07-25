/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:24:12 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:01:32 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to count the words in.
**				2. The delimiter character.
** Operation:	Counts the number of words seperated by delim
**				Example: ft_count_words("*hello*fellow***students*", ’*’)
**				returns the integer 3.
** Return:		Integer, number of words seperated by delim.
*/

#include "libft.h"

unsigned	ft_count_words(char const *str, char delim)
{
	unsigned	i;

	i = 0;
	while (*str)
	{
		str = ft_next_word(str, delim);
		i++;
	}
	return (i);
}
