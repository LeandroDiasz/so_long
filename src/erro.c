/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erro.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-02 17:58:17 by ledias-d          #+#    #+#             */
/*   Updated: 2025-01-02 17:58:17 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	error_exit(const char *message)
{
	perror("Error");
	write(1, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}

void	free_matriz(char **matriz)
{
	int	i;

	if (!matriz)
		return ;
	i = 0;
	while (matriz[i])
	{
		free(matriz[i]);
		i++;
	}
	free (matriz);
}
