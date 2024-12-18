/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   erro.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 19:41:48 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-18 19:41:48 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	error_exit(const char *message)
{
	perror("Error");
	write(1, message, ft_strlen(message));
	exit(EXIT_FAILURE);
}