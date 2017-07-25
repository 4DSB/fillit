/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:08 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:27:26 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The address of a pointer to the first link of a list that
**				   needs to be freed.
**				2. The address of a function to be appied to free the link.
** Operation: 	Frees the memory of this link and every successors of that link
**				using the functions del and free(3). Finally the pointer to
**				the link that was just freed must be set to NULL
** Approach: 	If the address of first link or function being passed as del
**				doesn't exist, exit the function returning void.
**				Else recursively pass in the next link with del function.
**				Lastly, use ft_lstdelone to free each single link.
**				example of del: ft_lst_cfree - voids content size and frees
**				content.
** Return: 		None.
*/

#include <stdlib.h>

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if (!(alst && *alst && del))
		return ;
	ft_lstdel(&(*alst)->next, del);
	ft_lstdelone(alst, del);
}
