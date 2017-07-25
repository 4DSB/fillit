/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:39:34 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of destination string.
**				2. Address of source string.
**				3. Number of bytes to be copied.
** Operation: 	Copies len bytes from string src to string dst.
** Approach: 	Standard C library function, followed the man page.
**				The two strings may overlap; the copy is always done in a
**				non-destructive manner by using a temorary variable 'tmp'.
** Return: 		The original value(head) of dst.
*/

#include <stdlib.h>

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	unsigned char		*tmp;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if ((tmp = (unsigned char *)malloc(sizeof(unsigned char) * n)))
	{
		i = 0;
		while (i < n)
		{
			tmp[i] = s[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			d[i] = tmp[i];
			i++;
		}
		free(tmp);
	}
	return (dest);
}
