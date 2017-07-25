/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:37:18 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:40:58 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. String dest, which is to be appended.
**				2. String src, which needs to be appended.
** Operation:	Standard C library function, so followed man page.
**				Append a copy of the null-terminated string s2 to the end of
**				the null-terminated string s1, then add a terminating `\0'.
**				The string s1 must have sufficient space to hold the result.
**				The source and destination strings should not overlap, as the
**				behavior is undefined.
** Return:		Pointer to the head of dest.
*/

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	c;
	char	*head;

	head = dest;
	while (*dest)
		dest++;
	while ((c = *src++))
		*dest++ = c;
	*dest = '\0';
	return (head);
}
