/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:55 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/26 18:36:11 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_is_sort(t_list *stack_a, int count)
{
	t_list	*aux;
	int i;
	
	aux = (t_list *)malloc(sizeof(t_list *));
	aux = stack_a;
	i = 0;

	while (aux->index != -1)
	{	
		aux	= aux->next;
		i++;
	}
	if (i == count)
		return (0);
	else
		return (1);
	return (0);
}

int	find_min_num(t_list *stack_a)
{
	t_list	*min_int;
	t_list	*current;
	int	num;

	min_int = stack_a;
	current = stack_a;

	while (current != NULL)
	{
		if (current->index == -1)
		{
			if (current->val < min_int->val)
			{
				min_int = current;
			}
	//		current = current->next;
		}
		current = current->next;
	}
	num = min_int->val;
	return (num);
}
/*
int	find_max_num(t_list *stack_a)
{
	t_list	*max_int;
	t_list	*current;
	int	num;

	max_int = stack_a;
	current = stack_a;

	while (current != NULL)
	{
		if (current->val > max_int->val)
		{
			max_int = current;
		}
		current = current->next;
	}
	num = max_int->val;
	return (num);
}*/

int		ft_find_index(t_list *stack_a)
{
	int i;
	t_list *aux;

	aux = stack_a;
	i = 0;
	while (aux != NULL)
	{
		if (aux->index != -1)
		{
			if (i < aux->index)
				i = aux->index;
		}
		aux = aux->next;
	}
	return (i);
}

t_list	*ft_index(t_list *stack_a, int count)
{
	t_list *aux;
	t_list *tmp;
	int min;
	int max;
	int index;

	aux = (t_list *)malloc(sizeof(t_list *));
//	max = find_max_num(stack_a);
	min = find_min_num(stack_a);
	index = ft_find_index(stack_a);
	aux = stack_a;
	
	if (index != 0)
		index = index + 1;
	while (aux != NULL)
	{
		if (aux->index == -1)
		{
			if (aux->val == min)
			{
				aux->index = index;
				index++;
				min++;
			}
			aux = aux->next;
		}
	}
	aux = stack_a;
	if ((index_is_sort(aux, count)) == 1)
		ft_index(aux, count);
	return (aux);
}
