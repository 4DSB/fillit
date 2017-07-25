/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 18:49:02 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument: an integer which is the ASCII represented as unsigned char or EOF.
** Operation: tests if value of character for which isalpha or isdigit is true.
** Return: 1 if true 0 if false.
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
