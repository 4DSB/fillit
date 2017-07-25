/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:00:52 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of source string.
**				2. Character whose occcurance is being found.
**				3. Number of bytes to be copied if c is not found.
** Operation: 	Locates the first occurrence of c (converted to unsigned char)
**				in string s.
** Approach: 	Standard C library function, followed the man page.
** Return: 		A pointer to the byte located.
**				NULL if no such byte exists within n bytes.
*/

#include <string.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ss;

	ss = (const unsigned char *)s;
	while (n--)
		if (*ss++ == (unsigned char)c)
			return ((void *)(ss - 1));
	return (NULL);
}
