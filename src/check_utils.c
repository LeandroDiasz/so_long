/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-02 17:57:48 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-02 17:57:48 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	map_size(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

char	**dup_map(char **map)
{
	char	**map_dup;
	int		size;
	int		i;

	if (!map)
		return (NULL);
	size = map_size(map);
	map_dup = (char **)malloc((size + 1) * sizeof(char *));
	if (!map_dup)
		return (NULL);
	i = 0;
	while (i < size)
	{
		map_dup[i] = ft_strdup(map[i]);
		if (!map_dup[i])
		{
			free_matriz(map_dup);
			return (NULL);
		}
		i++;
	}
	map_dup[i] = NULL;
	return (map_dup);
}

int	count_collectibles(char **map)
{
	int	i;
	int	j;
	int	collectibles;

	collectibles = 0;
	j = 0;
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (map[j][i] == 'C')
				collectibles++;
			i++;
		}
		j++;
	}
	return (collectibles);
}

int	validate_accessibility(char **map)
{
	int	i;
	int	j;

	j = 0;
	while (map[j])
	{
		i = 0;
		while (map[j][i])
		{
			if (map[j][i] == 'E')
				return (0);
			i++;
		}
		j++;
	}
	return (i);
}
