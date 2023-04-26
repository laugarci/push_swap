/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:55 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/25 17:11:06 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	index_is_sort(t_list *stack_a, int count)
{
	t_list	*aux;
	int i;
	int j;
	
	aux = stack_a;
	i = 0;
	j = 0;
	while (j <= count)
	{
		aux->index = aux->next->index;
		i++;	
	}
	if (i == count)
		return (0);
	else
		return (1);
	return (1);
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
		if (current->val < min_int->val)
		{
			min_int = current;
		}
		current = current->next;
	}
	num = min_int->val;

	return (num);
}

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
}

t_list	*ft_index(t_list *stack_a, int count)
{
	t_list *aux;
	t_list *tmp;
	int min;
	int max;
	int index;
	
	aux = (t_list *)malloc(sizeof(t_list *));
	max = find_max_num(stack_a);
	min = find_min_num(stack_a);
	index = 0;
	aux = stack_a;

	//while (min <= max)
	//{
		while (aux->next != NULL)
		{
			if (aux->val == min)
			{
				write(1, "1\n", 2);
				aux->index = index;
				index++;
				min++;
			}
			aux = aux->next;
		}
		aux = stack_a;
		printf("%d\n", aux->next->next->next->index);
	//}
//	if ((index_is_sort(stack_a, count)) == 1)
//	{
//		ft_index(stack_a, count);
//	}
	return (stack_a);
}
