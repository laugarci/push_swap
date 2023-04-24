
#include "push_swap.h"

int	ft_stack_is_sort(t_list *stack_a, int count)
{
	t_list *aux;

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
	int	i;

	i = 1;
	while (av[i])
	{
		new = ft_lstnew(ft_atoi(av[i]));
		ft_lstadd_back(&stack_a, new);
		i++;
	}
	return (stack_a);
}

void	ft_check_arg(char **str)
{
	int	i;
	int	j;

	i = 1;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] >= '0' && str[i][j] <= '9')
				j++;
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
	t_list *stack_a;
	t_list *stack_b;
	t_list *new;

	if (ac < 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	count = ac - 1;
	ft_check_arg(av);
	stack_a = (t_list *)malloc(sizeof(t_list));
	if (!stack_a)
		return (0);
	stack_b = (t_list *)malloc(sizeof(t_list));
	if (!stack_b)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	ft_push(&stack_b, 3);
	ft_push(&stack_b, 5);
	ft_push(&stack_b, 6);
	stack_a = ft_copy_stack(stack_a, av);
	if (ft_stack_is_sort(stack_a, count) == 1)
	{
		printf("stack is sort\n");
		return (0);
	}
	else
	{
		make_pa(&stack_a, &stack_b);
	}
}
