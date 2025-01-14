/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:37 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:37 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	while (tmp)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}

/*#include <stdio.h>
#include <string.h>

// Função de exemplo que será aplicada a cada elemento da lista
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	
	// Alocando memória para o conteúdo dos nós
	char	*content1 = strdup("Node 1");
	char	*content2 = strdup("Node 2");
	char	*content3 = strdup("Node 3");

	// Criando os nós
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);

	// Ligando os nós
	node1->next = node2;
	node2->next = node3;

	// Aplicando ft_lstiter para imprimir o conteúdo de cada nó
	printf("Conteúdo da lista:\n");
	ft_lstiter(node1, print_content);

	// Limpando a lista após uso
	ft_lstclear(&node1, free);

	return (0);
}*/