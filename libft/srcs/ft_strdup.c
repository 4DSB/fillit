/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 20:14:51 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:42:33 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to destination string.
**				2. Pointer to source string.
** Operation:	Allocates sufficient memory for a copy of the string s1, does
**				the copy, and returns a pointer to it. The pointer may
**				subsequently be used as an argument to the function free(3).
** Approach:	Standard C library function, hence followed man page.
** Return:		Pointer to the head of duplicated string.
**				NULL if operation was not possible.
*/

#include <string.h>

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dup;

	if ((dup = ft_strnew(ft_strlen(src))))
		return (ft_strcpy(dup, src));
	return (NULL);
}
