/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:00:30 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to destination string.
**				2. Pointer to source string.
** Operation:	Standard C library function, so followed man page.
**				Copy the string src to dst (including the terminating `\0'
**				character).
**				The source and destination strings should not overlap, as the
**				behavior is undefined
** Approach:	Standard C library function, hence followed man page.
** Return:		Pointer to the head of dst.
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*head;

	head = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (head);
}
