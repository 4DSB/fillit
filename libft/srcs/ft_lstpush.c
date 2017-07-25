/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:29:10 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 13:37:50 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. A pointer’s to the first link of a list.
**				2. A new element that needs to be pushed
** Operation: 	Appends(in the end) an element to the the list.
** Return: 		None.
*/

#include "libft.h"

void	ft_lstpush(t_list **alst, t_list *new)
{
	if (!alst)
		return ;
	while (*alst)
		*alst = (**alst).next;
	*alst = new;
}
