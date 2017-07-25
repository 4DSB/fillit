/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 19:15:55 by amittal           #+#    #+#             */
/*   Updated: 2017/06/18 08:15:17 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The character to output.
** Operation:	Outputs the character c to the standard output.
** Return:		None.
*/

#include <unistd.h>

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
