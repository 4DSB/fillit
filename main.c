/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:09:50 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 20:09:57 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int				main(int argc, char **argv)
{
	t_fillst	*start;
	int			j;

	start = NULL;
	if (argv[1] && argc == 2 && (j = check_file(argv[1]))
		&& ft_make_lst(argv[1], &start, j))
		solve(&start, j);
	else
		ft_putendl("error");
		return (0);
}
