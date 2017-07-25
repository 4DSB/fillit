/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:09 by amittal           #+#    #+#             */
/*   Updated: 2017/06/18 08:15:09 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The adress of a pointer to a link that needs to be freed.
**				2. The address of a function to be appied to free the link.
** Operation: 	Frees the memory of the link’s content using the function del
**				then frees the link’s memory using free(3). The memory of next
**				musnt not be freed under any circumstance. Finally, the pointer
**				to the link that was just freed must be set to NULL
** Approach: 	If the address of link exists, apply the function to the link.
**				Free the memory and set the pointer to NULL.
**				example of del: ft_lst_cfree - voids content size and frees
**				content.
** Return: 		None.
*/

#include <stdlib.h>

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst && *alst)
	{
		if (del)
			(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = NULL;
	}
}
