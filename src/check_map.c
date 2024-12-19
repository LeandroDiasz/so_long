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
		if (map[0][i] != '1')
			return (0);
		i++;
	}
	j = 1;
	while (map[j + 1])
	{
		if (map[j][0] != '1' || map[j][(int)ft_strlen(map[j]) - 1] != '1')
			return (0);
		j++;
	}
	i = 0;
	while (map[j][i])
	{
		if (map[j][i] != '1')
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
	if (element == 'E')
		(*exit)++;
	else if (element == 'C')
		(*collectibles)++;
	else if (element == 'P')
		(*player)++;
	else if (element != '0' && element != '1')
		return (0);
	return (1);
}
