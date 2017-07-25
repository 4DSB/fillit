/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:33 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 19:15:26 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to output.
** Operation:	Outputs the string s to the standard output.
** Approach:	Uses ft_strlen to get the length and then write to ouput.
** Return:		None.
*/

#include <unistd.h>

#include "libft.h"

void	ft_putstr(char const *str)
{
	if (str)
		write(1, str, ft_strlen(str));
}
