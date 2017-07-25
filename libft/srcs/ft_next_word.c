/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_next_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:23:28 by amittal           #+#    #+#             */
/*   Updated: 2017/06/26 04:40:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of destination string.
**				2. A delimeter, probably a space.
** Operation:	Traverses through the string. Once the delim is found, traverses
**				to the first element which is not the delim.
** Return:		Returns address of the string post occurance of delim.
*/

#include "libft.h"

char const	*ft_next_word(char const *str, char delim)
{
	char	c;

	while ((c = *str) && c != delim)
		str++;
	while ((c = *str) && c == delim)
		str++;
	return (str);
}
