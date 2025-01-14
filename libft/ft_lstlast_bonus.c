/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:41 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:41 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
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

    // Testando a função ft_lstlast
    t_list *last = ft_lstlast(node1);

    // Verificando se o último nó é o correto
    if (last == node3)
        printf("Teste 1 passado: último nó é 'Node 3'.\n");
    else
        printf("Teste 1 falhou.\n");

    // Testando com um nó único
    last = ft_lstlast(node3);  // Último nó quando só há um nó

    if (last == node3)
        printf("Teste 2 passado: lista de um nó, último é 'Node 3'.\n");
    else
        printf("Teste 2 falhou.\n");

    // Testando lista vazia
    last = ft_lstlast(NULL);  // Passando uma lista vazia

    if (last == NULL)
        printf("Teste 3 passado: lista vazia, retorno é NULL.\n");
    else
        printf("Teste 3 falhou.\n");

    return (0);
}*/