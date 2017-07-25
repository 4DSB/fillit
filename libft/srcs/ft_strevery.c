/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strevery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:45:23 by amittal           #+#    #+#             */
/*   Updated: 2017/07/21 23:57:30 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a string.
**				2. Pointer to addres of a function which takes char as argument.
** Operation:	Simple function to apply function f to every charater present in
**				string s.
** Return:		0, if the function was not successfully applied.
**				1, if the function was successfully applied.
*/

#include <string.h>

#include "libft.h"

int		ft_strevery(char const *s, int (*f)(char))
{
	char	c;

	while ((c = *s++))
	{
		if (!f(c))
			return (0);
	}
	return (1);
}
