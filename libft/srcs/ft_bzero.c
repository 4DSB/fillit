/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:24:39 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument: pointer to a string and an integer.
** Operation: Writes 'n' zeroed bytes to the string 's'.
** If n is zero, ft_bzero does nothing.
** Unsigned char is being used as opration needs to be performed byte by byte.
*/

#include <string.h>

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bytes;

	bytes = (unsigned char *)s;
	while (n--)
		*bytes++ = 0;
}
