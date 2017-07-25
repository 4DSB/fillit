/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:17:46 by amittal           #+#    #+#             */
/*   Updated: 2017/06/19 21:50:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument: an integer.
** Operation: counting number of digits.
** Return: number of digits.
*/

#include <string.h>

#include "libft.h"

size_t		ft_count_digits(int value)
{
	size_t	count;

	count = value == 0;
	while (value)
	{
		count++;
		value /= 10;
	}
	return (count);
}
