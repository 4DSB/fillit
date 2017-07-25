/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 09:17:13 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of first string.
**				2. Address of second string.
**				3. Length of both stings.
** Operation: 	Comparing byte string s1 against byte string s2.
**				Both strings are assumed to be n bytes long.
** Approach: 	Standard C library function, followed the man page.
**				Treated as unsigned char values (so that `\200' is greater than
**				`\0', for example). Zero-length strings are always identical.
** Return: 		Zero if the two strings are identical.
**				returns the difference between the first two differing bytes.
*/

#include <string.h>

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char		*p1;
	const unsigned char		*p2;
	unsigned char			c1;
	unsigned char			c2;

	if (n == 0)
		return (0);
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	c1 = *p1;
	c2 = *p2;
	while (c1 == c2 && n--)
	{
		c1 = (unsigned char)*p1++;
		c2 = (unsigned char)*p2++;
	}
	return (c1 - c2);
}
