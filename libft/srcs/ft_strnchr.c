/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:06:37 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 16:06:37 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a string.
**				2. Character to be located.
**				3. number of characters to be traversed.
** Operation:	The strchr() function locates the first occurrence of c
**				(converted to a char) in the string pointed to by s till n byte
**				The terminating null character is considered to be part of the
**				string; therefore if c is `\0', the functions locate the
**				terminating `\0'.
** Return:		A pointer to the located character.
**				NULL if the character does not appear in the string.
*/

#include <string.h>

#include "libft.h"

char	*ft_strnchr(const char *str, char q, size_t n)
{
	char	c;

	while ((c = *str) && n != 0)
	{
		if (c == q)
			return ((char *)str);
		str++;
		n--;
	}
	if (c == q)
		return ((char *)str);
	return (NULL);
}
