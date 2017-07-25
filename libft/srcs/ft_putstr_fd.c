/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:34 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 19:10:57 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to output.
**				2. The file descriptor.
** Operation:	Outputs the string s to the file descriptor fd.
** Approach:	Uses ft_strlen to get the length and then write to ouput.
** Return:		None.
*/

#include <unistd.h>

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
