/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:05:44 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/17 18:40:13 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_init_index(t_list *stack_a)
{
	t_list	*aux;

	aux = stack_a;
	while (aux != NULL)
	{
		aux->index = -1;
		aux = aux->next;
	}
	aux = stack_a;
	return (aux);
}

int	ft_stack_is_sort(t_list *stack_a)
{
	t_list	*aux;

	aux = stack_a;
	while (aux != NULL && aux->next != NULL)
	{
		if (aux->val < aux->next->val)
		{
			aux = aux->next;
		}
		else
			return (0);
	}
	return (1);
}

t_list	*ft_copy_stack(t_list *stack_a, char **av)
{
	int		num;
	int		i;
	t_list	*new;

	i = 1;
	while (av[i])
	{
		num = ft_atol(av[i]);
		new = ft_lstnew(num);
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	return (stack_a);
}

int	ft_check_nums(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		if (!(ft_isdigit(str[i][0])) && ((str[i][0] != '-') ||
					!str[i][1]))
			return (1);
		j = 1;
		while (str[i][j])
		{
			if (!ft_isdigit(str[i][j++]))
				return (1);
		}
		if (j > 11)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		count;
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2 || ft_strlen(av[1]) == 0 || (ft_check_nums(av) == 1))
		write(2, "Error\n", 6);
	if (ac < 2 || ft_strlen(av[1]) == 0 || (ft_check_nums(av) == 1))
		return (0);
	count = ac - 1;
	stack_a = NULL;
	stack_b = NULL;
	stack_a = ft_copy_stack(stack_a, av);
	if (check_dup(stack_a) == 1 || (ft_stack_is_sort(stack_a) == 1))
	{
		ft_free(&stack_a, &stack_b);
		return (0);
	}
	stack_a = ft_init_index(stack_a);
	stack_a = ft_index(stack_a, count);
	if (count <= 5)
		stack_a = sort_small_stack(stack_a, stack_b, count);
	else
		stack_a = ft_index_order(stack_a, stack_b);
	ft_free(&stack_a, &stack_b);
	return (0);
}
