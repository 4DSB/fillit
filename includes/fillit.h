/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:24:07 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 20:24:08 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FILLIT_H
# define	FILLIT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft.h"

# define BUFF_SIZE 512

typedef struct			s_xy
{
	int					x;
	int					y;
}						t_xy;
typedef struct			s_fillst
{
	char				letter;
	t_xy				*pts;
	struct	s_fillst	*next;
}						t_fillst;

int						check_file(char *file);
int						ft_make_lst(char *file, t_fillst **start, int j);
int						add_lst(t_fillst **start, char **tab);
void					solve(t_fillst **start, int j);
void					ft_printmap(char **tab, const char *delim);
int						ft_square(int j);
int						ft_gnl(int fd, char **line);
#endif
