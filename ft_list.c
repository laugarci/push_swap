/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 18:34:51 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/16 11:29:08 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*last;
	
	if (*stack)
	{
		last = ft_lstlast(*stack);
		last->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list *aux;

	aux = lst;
	while(aux->next)
	{
		aux = aux->next;
		if (aux->next == NULL)
			return (aux);
	}
	return (aux);
}

t_list	*ft_lstnew(int val)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->val = val;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void ft_lstadd_front(t_list **stack, t_list *new)
{
	new->next = *stack;
	*stack = new;
}

void	list_print(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux != NULL)
	{
		ft_putnbr_fd(aux->val, 1);
		ft_putendl_fd("", 1);
		aux = aux->next;
	}
}
