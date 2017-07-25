/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 18:56:38 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument: an integer which is the ASCII represented as unsigned char or EOF.
** Operation: tests for any printing character, including space (` ').
** Return: 1 if true 0 if false.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
