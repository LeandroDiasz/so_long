/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-16 15:55:45 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-16 15:55:45 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		t_game game;
		
		game_start(&game, av[1]);
	}
	else
		error_exit("Number of arguments invalid\n");
	return (0);
}