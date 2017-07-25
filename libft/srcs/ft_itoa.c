/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 23:15:17 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 19:08:37 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	an integer.
** Operation: 	converts integer to a allocated string ending with '\0'.
** Approach: 	Taking modulo of the number - inserting it to the string -
** 			 	reversing the string as the numbers are in reverse order.
** Return: 		a “fresh” string ending with ’\0’.
** 				If the allocation fails, the function returns NULL.
*/

#include <stdlib.h>

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*head;
	char	*str;

	if (!(str = malloc((n < 0) + ft_count_digits(n) + 1)))
		return (NULL);
	head = str;
	if (n < 0)
		*str++ = '-';
	*str++ = ABS(n % 10) + '0';
	n /= 10;
	while (n)
	{
		*str++ = ABS(n % 10) + '0';
		n /= 10;
	}
	*str = '\0';
	ft_strrev(*head == '-' ? head + 1 : head);
	return (head);
}
