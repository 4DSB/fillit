/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:37:18 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 13:24:25 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. String dest, which is to be appended.
**				2. String src, which needs to be appended.
**				3. Number of characters to be appended.
** Operation:	Standard C library function, so followed man page.
**				Append ot more than n characters of the null-terminated string
**				s2 to the end of the null-terminated string s1, then add a
**				terminating `\0'. The string s1 must have sufficient space to
**				hold the result. The source and destination strings should not
**				overlap, as the behavior is undefined.
** Return:		Pointer to the head of dest.
*/

#include <string.h>

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*head;

	head = dest;
	while (*dest++)
		;
	dest--;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (head);
}
