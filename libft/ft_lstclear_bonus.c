/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:26 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:26 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}

/*#include <stdio.h>
#include <string.h>

void	del(void *content)
{
	free(content);
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

	// Verificando o conteúdo antes de limpar
	printf("Antes de ft_lstclear:\n");
	printf("Nó 1: %s\n", (char *)node1->content);
	printf("Nó 2: %s\n", (char *)node2->content);
	printf("Nó 3: %s\n", (char *)node3->content);

	// Chamando ft_lstclear para limpar a lista
	ft_lstclear(&node1, del);

	// Verificando se a lista foi esvaziada
	if (!node1)
		printf("Depois de ft_lstclear: A lista está vazia.\n");
	else
		printf("Depois de ft_lstclear: A lista não está vazia.\n");

	return (0);
}*/