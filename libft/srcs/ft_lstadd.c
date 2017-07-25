/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:03 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 04:11:29 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The address of a pointer to the first link of a list.
**				2. The link to add at the beginning of the list.
** Operation: 	Adds a new element at the beginning of the list.
** Approach: 	If the address doesn't exist exit the function returning void.
**				Else insert the element to the beginning of the list.
** Return: 		None.
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	new->next = *alst;
	*alst = new;
}
