/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ledias-d <ledias-d@student.42.rio>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-11 12:55:56 by ledias-d          #+#    #+#             */
/*   Updated: 2024-10-11 12:55:56 by ledias-d         ###   ########.rio      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

/*#include <stdio.h>

int	main(void)
{
	char *content = "Hello, 42!";
    t_list *new_node = ft_lstnew((void *)content);

    if (new_node == NULL)
        printf("Erro: malloc falhou\n");
    else
    {
        if (new_node->content == content)
            printf("Teste 1 passou: Conteúdo está correto.\n");
        else
            printf("Teste 1 falhou: Conteúdo está incorreto.\n");

        if (new_node->next == NULL)
            printf("Teste 2 passou: O ponteiro 'next' está NULL.\n");
        else
            printf("Teste 2 falhou: O ponteiro 'next' não está NULL.\n");

        free(new_node);
    }
    return (0);
}*/