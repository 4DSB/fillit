/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 16:07:02 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a string.
**				2. Character to be located.
** Operation:	Standard C library function, so followed man page.
**				The strchr() function locates the first occurrence of c
**				(converted to a char) in the string pointed to by s.
**				The terminating null character is considered to be part of the
**				string; therefore if c is `\0', the functions locate the
**				terminating `\0'.
** Return:		A pointer to the located character.
**				NULL if the character does not appear in the string.
*/

#include <string.h>

#include "libft.h"

char	*ft_strchr(const char *str, char q)
{
	char	c;

	while ((c = *str))
	{
		if (c == q)
			return ((char *)str);
		str++;
	}
	if (q == '\0')
		return ((char *)str);
	return (NULL);
}
