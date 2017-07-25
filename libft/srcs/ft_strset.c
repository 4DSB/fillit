/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 14:19:30 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 14:19:30 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a string.
**				2. Character to be set.
** Operation:	Iterate through a string and set every character to c.
** Return:		Head of the string, str.
*/

#include "libft.h"

char				*ft_strset(char *str, char c)
{
	char	*head;

	head = str;
	while (*str)
		*str++ = c;
	return (head);
}
