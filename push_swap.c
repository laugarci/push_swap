/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:00:52 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/15 18:33:06 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_copy_stack(t_list **stack_a, char **av)
{
	t_list	*new;
	int		i;

	i = 1;
	while (av[i])
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(stack_a, new);
		i++;
	}
//	index_stack(stack);
}

int ft_count_nums(char **str)
{
	int i;
	int j;
	int nums;

	i = 1;
	j = 0;
	nums = 0;

	while(str[i])
	{
		if (str[i][j] != '\0')
			j++;
		nums++;
		i++;
	}
	return (nums);
}

void	ft_check_arg(char **str)
{
	int i;
	int j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '1' && str[i][j] <= '9')
			{
				j++;
			}
			else
			{
				write(1, "Error\n", 6);
				return ;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	int count;
	t_list **stack_a;
	t_list **stack_b;

	if (ac < 2)
		write(1, "Error\n", 6);
	count = ft_count_nums(av);
	ft_check_arg(av);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_copy_stack(stack_a, av);
//	if ((ft_stack_is_sort()) == 0)
//		return (*stack.A);
}
