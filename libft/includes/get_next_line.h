/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 02:55:42 by amittal           #+#    #+#             */
/*   Updated: 2017/07/10 02:56:00 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32

# include "libft.h"
# include <sys/types.h>
# include <sys/uio.h>

typedef struct s_save	t_save;

struct					s_save
{
	int					fd;
	char				*str;
};

int						get_next_line(int const fd, char **line);

#endif
