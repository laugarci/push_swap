/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:18:16 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/15 17:26:39 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_list *stack_a)
{
	t_list	*aux;
	t_list	*cmp;

	aux = stack_a;
	while (aux != NULL)
	{
		cmp = aux->next;
		while (cmp != NULL)
		{
			if (aux->val == cmp->val)
				return (1);
			cmp = cmp->next;
		}
		aux = aux->next;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
