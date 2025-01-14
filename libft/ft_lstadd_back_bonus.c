/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:16 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:16 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	tmp = ft_lstlast(*lst);
	if (!tmp)
		*lst = new;
	else
		tmp->next = new;
}

/*#include <stdio.h>

int main(void)
{
    // Criando nós da lista
    t_list *head = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    t_list *node3 = ft_lstnew("Node 3");
    t_list *new_node = ft_lstnew("Node 4");

    // Conectando os nós iniciais
    head->next = node2;
    node2->next = node3;

    // Testando ft_lstadd_back para adicionar o novo nó no final
    ft_lstadd_back(&head, new_node);

    // Verificando se o novo nó foi adicionado corretamente ao final
    t_list *last = ft_lstlast(head);
    if (last == new_node)
        printf("Teste 1 passado: 'Node 4' foi adicionado ao final da lista.\n");
    else
        printf("Teste 1 falhou: 'Node 4' não está no final da lista.\n");

    // Testando adicionar um nó em uma lista vazia
    t_list *empty_list = NULL;
    t_list *first_node = ft_lstnew("First Node");

    ft_lstadd_back(&empty_list, first_node);

    if (empty_list == first_node)
        printf("Teste 2 passado: nó adicionado à lista vazia corretamente.\n");
    else
        printf("Teste 2 falhou: nó não foi adicionado \
		corretamente à lista vazia.\n");

    return (0);
}*/