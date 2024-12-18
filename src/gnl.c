/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-17 18:08:16 by ledias-d          #+#    #+#             */
/*   Updated: 2024-12-17 18:08:16 by ledias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	*fill_line(int fd, char *backup, char *buffer)
{
	ssize_t	bytes;
	char	*temp;

	bytes = 1;
	while (bytes > 0)
	{
		if (!backup)
			backup = ft_strdup("");
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(buffer);
			free(backup);
			return (NULL);
		}
		buffer[bytes] = '\0';
		temp = backup;
		backup = ft_strjoin(backup, buffer);
		free(temp);
		if (ft_strchr(backup, '\n'))
			break ;
	}
	free(buffer);
	return (backup);
}

char	*set_line(char **backup)
{
	int		i;
	char	*line;
	char	*new_backup;

	i = 0;
	if (!(*backup)[i])
		return (NULL);
	while ((*backup)[i] != '\n' && (*backup)[i] != '\0')
		i++;
	line = ft_substr(*backup, 0, i + ((*backup)[i] == '\n'));
	if ((*backup)[i] == '\n')
		new_backup = ft_strdup(*backup + i + 1);
	else
		new_backup = NULL;
	free(*backup);
	*backup = new_backup;
	return (line);
}

char	*get_next_line(int fd)
{
	char		*buffer;
	static char	*backup;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	backup = fill_line(fd, backup, buffer);
	if (!backup)
		return (NULL);
	line = set_line(&backup);
	if (!line && backup)
	{
		free(backup);
		backup = NULL;
	}
	return (line);
}