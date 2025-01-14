/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:44 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:44 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
		return ;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
		return ;
	}
	n = n + 48;
	ft_putchar_fd(n, fd);
}

/*#include <stdio.h>
#include <fcntl.h>

void	test_putnbr_fd_stdout(void)
{
	int num1 = 2147483647;
	int num2 = -2147483648;

	printf("Escrevendo números para o STDOUT:\n");
	ft_putnbr_fd(num1, 1);
	printf("\n");
	ft_putnbr_fd(num2, 1);
	printf("\n");
}

void	test_putnbr_fd_file(void)
{
	int fd;
	int num1 = 2147483647;
	int num2 = -2147483648;

	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1)
	{
		printf("Erro ao abrir o arquivo!\n");
		return;
	}

	ft_putnbr_fd(num1, fd);
	ft_putchar_fd('\n', fd);
	ft_putnbr_fd(num2, fd);
	ft_putchar_fd('\n', fd);

	close(fd);
	printf("Números '%d' e '%d' escritos no arquivo output.txt\n", num1, num2);
}

int main(void)
{
	test_putnbr_fd_stdout();
	test_putnbr_fd_file();

	return 0;
}*/