/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 22:18:35 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 22:18:36 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_printmap(char **tab, const char *delim)
{
	int		i;
	i = 0;
	while(tab[i])
	{
		ft_putstr(tab[i]);
		ft_putstr(delim);
		++i;
	}
}