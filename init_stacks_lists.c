/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks_lists.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:03:53 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/15 17:07:01 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux->next)
	{
		aux = aux->next;
		if (aux->next == NULL)
			return (aux);
	}
	return (aux);
}

void	ft_lstadd_back(t_list **stack_a, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*stack_a)
		*stack_a = new;
	else
	{
		last = ft_lstlast(*stack_a);
		last->next = new;
	}
}

t_list	*ft_lstnew(int val)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->val = val;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	else if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_free(t_list **stack)
{
	t_list	*aux;
	t_list	*next;

	aux = *stack;
	while (aux != NULL)
	{
		next = aux->next;
		free(aux);
		aux = next;
	}
	*stack = NULL;
}
