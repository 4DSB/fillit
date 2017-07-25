/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:05:39 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. String dest, which is to be appended.
**				2. String src, which needs to be appended.
**				3. max size to be appended.
** Operation:	Standard C library function, so followed man page.
**				Concatenate strings. Safer replacement of strncat. Take the full
**				size of the buffer (not just the length) and guarantee to
**				NUL-terminate the result (as long as size is larger
**				than 0 or, in the case of strlcat(), as long as there is at
**				least one byte free in dst). Note that a byte for the NUL
**				should be included in size. Only operates on NUL terminated
**				strings.
**Approach:		Function appends the NUL-terminated string src to end of dst.
**				It will append at most size - strlen(dst) - 1 bytes,
**				NUL-terminating the result.
**				The source and destination strings should not overlap, as the
**				behavior is undefined.
** Return:		The total length of the string they tried to create. Means the
**				initial length of dst plus the length of src
*/

#include <string.h>

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	left_to_copy;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dst_len = i;
	src_len = ft_strlen(src);
	left_to_copy = size - dst_len;
	if (left_to_copy == 0)
		return (dst_len + src_len);
	i = 0;
	while (src[i] && left_to_copy-- > 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
