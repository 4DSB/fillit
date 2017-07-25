/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 14:16:08 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string that needs to be cleared..
** Operation:	Sets every character of the string to the value ’\0’..
** Return:		None.
*/

#include "libft.h"

void	ft_strclr(char *as)
{
	if (as)
		while (*as)
			*as++ = '\0';
}
