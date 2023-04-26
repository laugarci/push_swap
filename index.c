/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:55 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/26 18:44:46 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_is_sort(t_list *stack_a, int count)
{
	int i;

	i = 0;	
	while (stack_a != NULL)
	{
		if (stack_a->index != -1)
			i++;
		stack_a = stack_a->next;
	}
	printf("i es %d\n", i);
	printf("count es %d\n", count);
	if (i != count)
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
		if (current->index == -1 && current->val < min_int->val)
			min_int = current;
		current = current->next;
	}
	return (min_int->val);
}

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
	int min;
	int max;
	int index;

	min = find_min_num(stack_a);
	index = ft_find_index(stack_a);
	aux = stack_a;
	printf("min %d\n", min);
	printf("index %d\n", index);
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
		}
		aux = aux->next;
	}
	aux = stack_a;
	printf("indice\n");
	printf("%d\n", aux->index);
	printf("%d\n", aux->next->index);
	printf("%d\n", aux->next->next->index);
	printf("%d\n", aux->next->next->next->index);
	printf("%d\n", aux->next->next->next->next->index);
	printf("%d\n", aux->next->next->next->next->next->index);
	if ((index_is_sort(aux, count)) == 1)
	{
		write(1, "hola\n", 5);
		ft_index(aux, count);
	}
	else
	{
		printf("ok\n");
		return (aux);
	}
}
