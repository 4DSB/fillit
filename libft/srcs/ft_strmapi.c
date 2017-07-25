/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:57:44 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to map.
**				2. The function to apply to each character of s.
** Operation:	Applies the function f to each character of the string passed
**				as argument by giving its index as first argument to create a
**				“fresh” new string (with malloc(3)) resulting from the
**				successive applications of f.
** Return:		The “fresh” string created from the successive applications
**				of f.
*/

#include <string.h>

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*map;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if ((map = ft_strnew(len)))
	{
		while (i < len)
		{
			map[i] = f(i, s[i]);
			i++;
		}
		map[len] = '\0';
		return (map);
	}
	return (NULL);
}
