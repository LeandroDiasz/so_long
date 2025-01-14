/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:20 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:20 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*#include <stdio.h>

int main(void)
{
    t_list *head;
    t_list *new_node;

    // Criando o nó inicial da lista
    head = ft_lstnew("Primeiro");

    // Criando um novo nó para adicionar na frente da lista
    new_node = ft_lstnew("Novo na frente");

    // Teste 1: Adicionando o novo nó na frente
    ft_lstadd_front(&head, new_node);
    
    // Verificando se o novo nó está na frente
    printf("Primeiro nó da lista (deve ser 'Novo na frente')\
	: %s\n", (char *)head->content);  
    // Saída esperada: "Novo na frente"

    // Verificando se o segundo nó é o anterior 'Primeiro'
    printf("Segundo nó da lista (deve ser 'Primeiro'): %s\n"\
	, (char *)head->next->content);
	// Saída esperada: "Primeiro"

    // Teste 2: Lista vazia, adicionando um nó
    t_list *empty_list = NULL;
    t_list *new_in_empty = ft_lstnew("Novo em lista vazia");

    ft_lstadd_front(&empty_list, new_in_empty);
    
    // Verificando se o novo nó foi adicionado em lista vazia
    printf("Primeiro nó em lista vazia (deve ser 'Novo em lista vazia\'): \
	%s\n", (char *)empty_list->content);  // Saída esperada: \
	"Novo em lista vazia"

    return (0);
}*/