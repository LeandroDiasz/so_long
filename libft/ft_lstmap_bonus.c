/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:48 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:48 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_obj;

	if (!lst || !f || !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		n_obj = ft_lstnew(f(lst->content));
		if (!n_obj)
		{
			ft_lstclear(&n_list, del);
			return (NULL);
		}
		ft_lstadd_back(&n_list, n_obj);
		lst = lst->next;
	}
	return (n_list);
}

/*#include <stdio.h>
#include <string.h>

// Função que será aplicada a cada elemento da lista
void	*duplicate_content(void *content)
{
	char *new_content = strdup((char *)content);
	return (new_content);
}

// Função que será usada para deletar o conteúdo (free)
void	del_content(void *content)
{
	free(content);
}

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;
	
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

	// Aplicando ft_lstmap para criar uma nova lista com os conteúdos duplicados
	new_list = ft_lstmap(node1, duplicate_content, del_content);

	// Imprimindo o conteúdo da nova lista
	printf("Conteúdo da nova lista:\n");
	ft_lstiter(new_list, print_content);

	// Limpando as duas listas após o uso
	ft_lstclear(&node1, del_content);
	ft_lstclear(&new_list, del_content);

	return (0);
}*/