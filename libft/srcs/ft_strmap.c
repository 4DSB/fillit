/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:32:32 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 21:40:07 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to map.
**				2. The function to apply to each character of s.
** Operation:	Applies the function f to each character of the string given
**				as argument to create a “fresh” new string (with malloc(3))
**				resulting from the successive applications of f..
** Return:		The “fresh” string created from the successive applications
**				of f.
*/

#include <string.h>

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	c;
	char	*head;
	char	*map;

	if (!s || !f)
		return (NULL);
	if ((map = ft_strnew(ft_strlen(s))))
	{
		head = map;
		while ((c = *s++))
			*map++ = f(c);
		*map = '\0';
		return (head);
	}
	return (NULL);
}
