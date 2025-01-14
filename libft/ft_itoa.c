/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:11 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:11 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	count(int n)
{
	unsigned int	imp;
	unsigned int	i;

	i = 0;
	imp = 0;
	if (n < 0)
	{
		imp++;
		n *= -1;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (imp + i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	long	nbr;

	if (n == 0)
		return (ft_strdup("0"));
	ptr = (char *)malloc(count(n) + 1);
	if (!ptr)
		return (NULL);
	i = count(n) - 1;
	nbr = n;
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
	{
		ptr[i] = ((nbr % 10) + 48);
		nbr = nbr / 10;
		i--;
	}
	ptr[count(n)] = '\0';
	return (ptr);
}

/*#include <stdio.h>

void	test_ft_itoa(void)
{
	char *result;

	result = ft_itoa(12345);
	printf("Número: 12345 -> String: %s\n", result);
	free(result);

	result = ft_itoa(-67890);
	printf("Número: -67890 -> String: %s\n", result);
	free(result);

	result = ft_itoa(0);
	printf("Número: 0 -> String: %s\n", result);
	free(result);

	result = ft_itoa(2147483647);
	printf("Número: 2147483647 -> String: %s\n", result);
	free(result);

	result = ft_itoa(-2147483648);
	printf("Número: -2147483648 -> String: %s\n", result);
	free(result);
}

int	main(void)
{
	test_ft_itoa();
	return (0);
}*/