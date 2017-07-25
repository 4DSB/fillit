/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:39:08 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to destination string.
**				2. Pointer to source string.
**				3. length of characters to be copied
** Operation:	Copy at most len characters from src into dst.  If src is less
**				than len characters long, the remainder of dst is filled with
**				`\0' characters.  Otherwise, dst is not terminated.
**				The source and destination strings should not overlap, as the
**				behavior is undefined
** Approach: 	Standard C Library Function, so followed man.
**				function appends the NULterminated string src to the end of dst
**				It will append at most size - strlen(dst) - 1 bytes,
**				NUL-terminating the result
** Return:		The total length of the string they tried to create that means
**				the length of src.
*/

#include <string.h>

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	const char	*head;

	if (!src)
		return (0);
	head = src;
	while (sz > 1)
	{
		sz--;
		if ((*dst++ = *src++) == 0)
			break ;
	}
	if (sz == 1)
	{
		*dst = '\0';
		while (*src++)
			;
	}
	return (src - head - 1);
}
