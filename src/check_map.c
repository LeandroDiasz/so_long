/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 19:43:17 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-18 19:43:17 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_rectangle(char **map)
{
	int	len;
	int	i;

	if (!map || !map[0])
		return (0);
	len = ft_strlen(map[0]);
	i = 1;
	while (map[i])
	{
		if ((int)ft_strlen (map[i]) != len)
			return (0);
		i++;
	}
	return (1);
}

int	check_wall(char **map)
{
	int	i;
	int	j;

	i = 0;
	while (map[0][i])
	{
		if (map[0][i] != WALL)
			return (0);
		i++;
	}
	j = 1;
	while (map[j + 1])
	{
		if (map[j][0] != WALL || map[j][(int)ft_strlen(map[j]) - 1] != WALL)
			return (0);
		j++;
	}
	i = 0;
	while (map[j][i])
	{
		if (map[j][i] != WALL)
			return (0);
		i++;
	}
	return (1);
}

int	check_elements(char **map)
{
	int	i;
	int	j;
	int	exit;
	int	player;
	int	collectibles;

	j = 0;
	exit = 0;
	player = 0;
	collectibles = 0;
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (!check_aux(map[j][i], &exit, &player, &collectibles))
				return (0);
			i++;
		}
		j++;
	}
	if (player != 1 || exit != 1 || collectibles == 0)
		return (0);
	return (1);
}

int	check_aux(char element, int *exit, int *player, int *collectibles)
{
	if (element == EXIT)
		(*exit)++;
	else if (element == COLLECT)
		(*collectibles)++;
	else if (element == PLAYER)
		(*player)++;
	else if (element != FLOOR && element != WALL)
		return (0);
	return (1);
}

int	check_ber(const char *file)
{
	int	i;
	int	j;

	if (!file && ft_strlen(file) < 4)
		error_exit("Error: null file or insufficient size", NULL);
	i = ft_strlen(file) - 4;
	j = 0;
	while (".ber"[j])
	{
		if (file[i + j] != ".ber"[j])
		{
			ft_printf("Error: Invalid extension. Use .ber\n");
			return (0);
		}
		j++;
	}
	return (1);
}
