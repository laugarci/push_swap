/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:55 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/13 16:33:42 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_is_sort(t_list *stack_a, int count)
{
	int	i;

	i = 0;
	while (stack_a != NULL)
	{
		if (stack_a->index != -1)
			i++;
		stack_a = stack_a->next;
	}
	if (i != count)
		return (1);
	return (0);
}

int	find_min_num(t_list *stack_a)
{
	t_list	*min_int;
	t_list	*current;

	min_int = stack_a;
	current = stack_a;
	while (min_int->index != -1)
		min_int = min_int->next;
	while (current != NULL)
	{
		if (current->index == -1 && current->val <= min_int->val)
		{
			min_int = current;
		}
		current = current->next;
	}
	return (min_int->val);
}

int	ft_find_index(t_list *stack_a)
{
	int		i;
	t_list	*aux;

	aux = stack_a;
	i = -1;
	while (aux != NULL)
	{
		if (aux->index != -1)
		{
			if (aux->index > i)
				i = aux->index;
		}
		aux = aux->next;
	}
	return (i);
}

t_list	*ft_index(t_list *stack_a, int count)
{
	t_list	*aux;
	int		min;
	int		index;

	min = find_min_num(stack_a);
	index = (ft_find_index(stack_a)) + 1;
	aux = stack_a;
	while (aux != NULL)
	{
		if (aux->index == -1)
		{
			if (aux->val == min)
			{
				aux->index = index;
				min++;
				index++;
			}
		}
		aux = aux->next;
	}
	aux = stack_a;
	if ((index_is_sort(aux, count)) == 1)
		ft_index(aux, count);
	return (aux);
}
