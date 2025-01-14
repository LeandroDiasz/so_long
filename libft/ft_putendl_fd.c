/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:39 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:39 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	write(fd, s, i);
	write(fd, "\n", 1);
}

/*#include <stdio.h>
#include <fcntl.h>

void	test_ft_putendl_fd_stdout(void)
{
	char	c[] = "Jamal Bieber";

	printf("Escrevendo para o STDOUT: ");
	fflush(stdout);
    ft_putendl_fd(c, 1);
    printf("\n");
}

void	test_ft_putendl_fd_file(void)
{
	int	fd;
	char	c[] = "Jamal Bieber";

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
	{
		printf("Erro ao abrir o arquivo!\n");
        return;
	}

	ft_putendl_fd(c, fd);

	close(fd);
    printf("Caractere '%s' escrito no arquivo output.txt\n", c);
}

int main(void)
{
    test_ft_putendl_fd_stdout();
	//test_ft_putendl_fd_file();
    return 0;
}*/