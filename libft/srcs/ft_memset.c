/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 14:16:33 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of destination string.
**				2. Value to copied as unsigned char.
**				3. Number of bytes to be copied.
** Operation:	Writes len bytes of value c (converted to an unsigned char)
**				to the string b.
** Approach:	Standard C library function, followed the man page.
** Return:		Returns its first argument.
*/

#include <string.h>

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*bytes;

	if (n > 0)
	{
		bytes = (unsigned char *)s;
		while (n--)
			*bytes++ = (unsigned char)c;
	}
	return (s);
}
