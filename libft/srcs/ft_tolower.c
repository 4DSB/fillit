/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:45 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 18:59:46 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The letter.
** Operation:	Converts a upper-case letter to the corresponding lower-case
**				letter.
** Return:		Lower case letter of there is one.
**				Otherwise letter itself.
*/

#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ' ');
	else
		return (c);
}
