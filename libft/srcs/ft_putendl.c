/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:19 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 19:05:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to output.
** Operation:	Outputs the string s to the standard output followed by a
**				’\n’.
** Return:		None.
*/

#include <unistd.h>

#include "libft.h"

void	ft_putendl(char const *s)
{
	char	newline;

	if (s)
	{
		newline = '\n';
		write(1, s, ft_strlen(s));
		write(1, &newline, 1);
	}
}
