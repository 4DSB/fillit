/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 14:30:32 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a string.
**				2. Character to be located.
** Operation:	The strchr() function locates the last occurrence of c
**				(converted to a char) in the string pointed to by s.
**				The terminating null character is considered to be part of the
**				string; therefore if c is `\0', the functions locate the
**				terminating `\0'.
** Return:		A pointer to the located character.
**				NULL if the character does not appear in the string.
*/

#include <string.h>

#include "libft.h"

char	*ft_strrchr(const char *str, char q)
{
	char	c;
	char	*last;

	last = NULL;
	while ((c = *str))
	{
		if (c == q)
			last = (char *)str;
		str++;
	}
	if (q == '\0')
		return ((char *)str);
	return ((char *)last);
}
