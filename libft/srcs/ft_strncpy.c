/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:02:40 by amittal          ###   ########.fr       */
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
** Approach:	Standard C library function, hence followed man page.
** Return:		Pointer to the head of dst.
*/

#include <string.h>

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	char	*head;
	size_t	i;

	head = dest;
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (head);
}
