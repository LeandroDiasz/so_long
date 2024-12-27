/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erro.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leo <leo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:41:48 by ledias-d          #+#    #+#             */
/*   Updated: 2024/12/26 21:21:56 by leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	error_exit(const char *message)
{
	perror("Error");
	write(1, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}

void	free_matriz(char	**matriz)
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