/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:24:36 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:01:12 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to count the characters length in.
**				2. The delimiter character.
** Operation:	Counts the number of words seperated before 1st delim
**				Example: ft_word_length("hello*fellow***students*", ’*’)
**				returns the integer 5.
** Return:		Integer, number of characters before 1st occurace of delim.
*/

#include "libft.h"

unsigned	ft_word_length(char const *str, char delim)
{
	unsigned	i;

	i = 0;
	while (str[i] && str[i] != delim)
		i++;
	return (i);
}
