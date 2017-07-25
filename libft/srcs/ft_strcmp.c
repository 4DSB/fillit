/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:06:48 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to first string.
**				2. Pointer to second string.
** Operation:	Lexicographically compare the null-terminated strings s1 and s2.
** Approach:	Standard C library function, hence followed man page.
**				The comparison is done using unsigned characters, so that `\200'
**				is greater than `\0'.
** Return:		an integer greater than, equal to, or less than 0, according as
**				the string s1 is greater than, equal to, or less than string s2.
*/

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	c1 = *s1;
	c2 = *s2;
	while (c1 == c2 && c1)
	{
		c1 = (unsigned char)*s1++;
		c2 = (unsigned char)*s2++;
	}
	return (c1 - c2);
}
