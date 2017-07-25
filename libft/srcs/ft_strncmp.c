/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 02:25:54 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:06:16 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to first string.
**				2. Pointer to second string.
**				3. Number of characters to be compared.
** Operation:	Lexicographically compare the null-terminated strings s1 and s2
**				for not more than n characters.
** Approach:	Standard C library function, hence followed man page.
**				Designed for comparing strings rather than binary data,
**				characters that appear after a `\0' character are not compared.
**				The comparison is done using unsigned characters, so that `\200'
**				is greater than `\0'.
** Return:		an integer greater than, equal to, or less than 0, according as
**				the string s1 is greater than, equal to, or less than string s2.
*/

#include <string.h>

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t sz)
{
	unsigned char	c1;
	unsigned char	c2;

	if (sz == 0)
		return (0);
	c1 = *s1;
	c2 = *s2;
	while (c1 == c2 && c1 && sz--)
	{
		c1 = (unsigned char)*s1++;
		c2 = (unsigned char)*s2++;
	}
	return (c1 - c2);
}
