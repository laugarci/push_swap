/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:05:44 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/08 19:37:40 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_list *stack)
{
	t_list *aux;

	aux = stack;
	while(aux != NULL)
	{
		printf("entra\n");
		stack = aux;
		aux = stack->next;
		free(stack);
	}
	stack = NULL;
}

t_list	*ft_init_index(t_list *stack_a)
{
	t_list *aux;

	aux = stack_a;
	while (aux != NULL)
	{
		aux->index = -1;
		aux = aux->next;
	}
	aux = stack_a;
	return (aux);
}

int	ft_stack_is_sort(t_list *stack_a, int count)
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
	t_list	*new;
	int		i;

	i = 1;
	while (av[i])
	{
		new = ft_lstnew(ft_atoi(av[i]));
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
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9' ||
				str[i][j] == '-' && str[i][j + 1] >= '0' && str[i][j + 1] <= '9')
			{
					j++;
			}
			else
			{
				write(2, "Error\n", 6);
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		count;
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*new;

	if (ac < 2)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	count = ac - 1;
	if (ft_check_nums(av) == 1)
		return (0);
	stack_a = (t_list *)malloc(sizeof(t_list *));
	if (!stack_a)
		return (0);
	stack_b = (t_list *)malloc(sizeof(t_list));
	if (!stack_b)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	stack_a = ft_copy_stack(stack_a, av);
	if (check_dup(stack_a) == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (ft_stack_is_sort(stack_a, count) == 1)
		return (0);
	else
	{
		stack_a = ft_init_index(stack_a);
		stack_a = ft_index(stack_a, count);
		if (count <= 5)
			sort_small_stack(stack_a, stack_b, count);
		else
			stack_a = ft_index_order(stack_a, stack_b);
	}
	ft_free(stack_a);
	ft_free(stack_b);
	return (0);
}
