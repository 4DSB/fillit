/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:09:41 by olkovale          #+#    #+#             */
/*   Updated: 2017/06/29 01:18:24 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#include "libft.h"
#include "tetread.h"
#include "validate.h"
#include "fillit.h"

int		print_err()
{
	ft_putstr("error\n");
	return (0);
}

int		print_use()
{
	ft_putstr("Usage: ./fillit [filepath]\n");
	return (0);
}

void	print_tetriminos(t_list	*tetriminos)
{
	while (tetriminos)
	{
		ft_putendl(tetriminos->content);
		tetriminos = tetriminos->next;
	}
}

int		main(int argc, char **argv)
{
	int					fd;
	t_read_tetriminos	*ret;
	
	if (argc != 2)
		return (print_use());
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		return (print_err());
	if (!(ret = read_tetriminos(fd)))
		return (print_err());
	//print_tetriminos(ret->tetriminos);
	if (ret->err == ERR_READ_TETRIMINOS_FAILURE)
		return (print_err());
	if (!validate_tetriminos(ret->tetriminos))
		return (print_err());
	//do_everything_else(ret->tetriminos);
	ft_putstr("read and validated file successfully\n");
	close(fd);

	return (0);
}
