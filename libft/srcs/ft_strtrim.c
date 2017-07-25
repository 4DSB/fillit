/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:47 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 17:00:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to be trimed.
** Operation:	Allocates (with malloc(3)) and returns a copy of the string
**				given as argument without whitespaces at the beginning or at
**				the end of the string. Will be considered as whitespaces the
**				following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
**				at the beginning or at the end, the function returns a
**				copy of s.
** Return:		The “fresh” trimmed string or a copy of s.
**				NULL, if the allocation fails
*/

#include <string.h>

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	c;
	char	*start;

	if (!s)
		return (NULL);
	while (ISSPACE((c = *s)))
		s++;
	if (!*((start = (char *)s)))
		return (ft_strnew(0));
	while ((c = *s))
		s++;
	s--;
	while (ISSPACE((c = *s)))
		s--;
	return (ft_strsub(start, 0, s - start + 1));
}
