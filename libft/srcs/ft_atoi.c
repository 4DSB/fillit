/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:24:36 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument: pointer to a string.
** Operation: Converts the initial portion of the string to int.
** Return: an integer, hence limited by max and min int values.
** Approach: Assuming the number is negetive and changing the sign if required.
*/

#include "libft.h"

int		ft_atoi(char *str)
{
	char	c;
	int		neg_num;
	int		neg;

	while ((c = *str) && ISSPACE(c))
		str++;
	neg = c == '-';
	str += c == '-' || c == '+';
	neg_num = 0;
	while ((c = *str++) && ISDIGIT(c))
		neg_num = neg_num * 10 - c + '0';
	return (neg ? neg_num : -neg_num);
}
