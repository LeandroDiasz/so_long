/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:56:04 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:56:04 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/*#include <stdio.h>

int main(void)
{
    // Criando nós da lista
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");

    // Conectando os nós
    node1->next = node2;
    node2->next = node3;

    // Teste: Calculando o tamanho da lista
    int size = ft_lstsize(node1);
    printf("Tamanho da lista: %d\n", size);  // Saída esperada: 3

    // Teste: Tamanho de lista vazia
    size = ft_lstsize(NULL);
    printf("Tamanho da lista vazia: %d\n", size);  // Saída esperada: 0

    return (0);
}*/