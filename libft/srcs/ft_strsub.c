/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:59:48 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string from which create the substring.
**				2. The start index of the substring.
**				3. The size of the substring.
** Operation:	Allocates (with malloc(3)) and returns a “fresh” substring
**				from the string given as argument. The substring begins at
**				indexstart and is of size len. If start and len aren’t refering
**				to a valid substring, the behavior is undefined.
** Return:		The substring.
**				NULL, if the allocation fails
*/

#include <string.h>

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if ((sub = ft_strnew(len)))
		return (ft_strncpy(sub, s + start, len));
	return (NULL);
}
