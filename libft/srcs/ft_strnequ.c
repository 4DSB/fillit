/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:12:01 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:58:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The first string to be compared.
**				2. The second string to be compared.
**				3. The maximum number of characters to be compared.
** Operation:	Lexicographical comparison between s1 and s2 up to n characters
**				or until a ’\0’ is reached. If the 2 strings are identical,
**				the function returns 1, or 0 otherwise
** Return:		1 or 0 according to if the 2 strings are identical or not.
*/

#include <string.h>

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	return (ft_strncmp(s1, s2, n) ? 0 : 1);
}
