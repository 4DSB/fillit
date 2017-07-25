/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:44 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 18:59:34 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The letter.
** Operation:	Converts a lower-case letter to the corresponding upper-case
**				letter.
** Return:		Upper case letter of there is one.
**				Otherwise letter itself.
*/

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ' ');
	else
		return (c);
}
