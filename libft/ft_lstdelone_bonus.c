/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:32 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:32 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*#include <stdio.h>
#include <string.h>

// Função del
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*node;

	// Alocando memória para o conteúdo do nó
	char	*content = strdup("Hello");
	node = ft_lstnew(content);
	if (!node)
	{
		printf("Erro ao criar o nó.\n");
		return (1);
	}
	printf("Antes de ft_lstdelone: O conteúdo do nó é \
	'%s'\n", (char *)node->content);

	// Chamando a função para deletar o nó
	ft_lstdelone(node, del);
	printf("Depois de ft_lstdelone: O nó foi deletado.\n");

	return (0);
}*/