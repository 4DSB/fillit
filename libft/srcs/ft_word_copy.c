/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:24:56 by amittal           #+#    #+#             */
/*   Updated: 2017/07/21 23:58:46 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Destination string
**				2. Source String.
**				3. The delimiter character.
** Operation:	Copies all characters before 1st delim to dest.
**				Example: ft_word_copy("hello*fellow***students*", ’*’)
**				returns the string "hello".
** Return:		Head to the new string.
*/

#include <string.h>

#include "libft.h"

char		*ft_word_copy(char *dest, char const *src, char delim)
{
	char	*head;
	char	c;

	head = NULL;
	while ((c = *src++) && c != delim)
		*dest++ = c;
	*dest = '\0';
	return (head);
}
