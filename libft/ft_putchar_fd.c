/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:33 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:33 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <stdio.h>
#include <fcntl.h>

void test_ft_putchar_fd_stdout(void)
{
    char c = 'A';
    
    printf("Escrevendo para o STDOUT: \n");
    ft_putchar_fd(c, 1);
    printf("\n");
}

void test_ft_putchar_fd_file(void)
{
    int fd;
    char c = 'B';
    
    // Abre (ou cria) um arquivo para escrita
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    
    if (fd == -1)
    {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    
    // Escreve o caractere 'B' no arquivo
    ft_putchar_fd(c, fd);
    
    // Fecha o arquivo
    close(fd);
    
    printf("Caractere '%c' escrito no arquivo output.txt\n", c);
}

int main(void)
{
    //test_ft_putchar_fd_stdout();
	test_ft_putchar_fd_file();
    return 0;
}*/