/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:17:56 by amittal           #+#    #+#             */
/*   Updated: 2017/07/21 23:57:57 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The prefix string..
**				2. The suffix string.
** Operation:	Allocates (with malloc(3)) and returns a “fresh” string ending
**				with ’\0’, result of the concatenation of s1 and s2.
** Return:		The “fresh” string result of the concatenation of the 2 strings
**				NULL, if allocation fails.
*/

#include <string.h>

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;

	if (!s1 || !s2)
		return (NULL);
	if ((cat = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
	{
		ft_strcpy(cat, s1);
		return (ft_strcat(cat, s2));
	}
	return (NULL);
}
