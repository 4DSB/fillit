/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 03:47:54 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of destination string.
**				2. Address of source string.
**				3. Character whose occcurance is being found.
**				4. Number of bytes to be copied if c is not found.
** Operation: 	The function copies bytes from string src to string dst.
**				If the character c (as converted to an unsigned char) occurs in
**				the string src, the copy stops and a pointer to the byte after
**				the copy of c in the string dst is returned.
**				Otherwise, n bytes are copied, and a NULL pointer is returned.
** Approach: 	Standard C library function, followed the man page.
**				Hence, the source and destination strings should not overlap,
**				as the behavior is undefined.
** Return: 		pointer to the byte after the copy of c in src.
**				NULL if character c not found in src.
*/

#include <string.h>

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		if ((*d++ = *s++) == (unsigned char)c)
			return (d);
	return (NULL);
}
