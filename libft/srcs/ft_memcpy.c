/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:03:20 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of destination string.
**				2. Address of source string.
**				3. Number of bytes to be copied.
** Operation: 	Copies n bytes from memory area src to memory area dst.
**				Both strings are assumed to be n bytes long.
** Approach: 	Standard C library function, followed the man page.
**				If dst and src overlap, behavior is undefined.  Applications
**				in which dst and src might overlap use ft_memmove instead.
** Return: 		The original value(head) of dst.
*/

#include <string.h>

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
