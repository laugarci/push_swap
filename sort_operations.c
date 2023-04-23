#include "push_swap.h"

void	make_sa(t_list *stack_a)
{
	int aux;
	

	aux = stack_a->val;
	stack_a->val = stack_a->next->val;
	stack_a->next->val = aux;
//	write(1, "sa\n", 3);
}

void	make_sb(t_list *stack_b)
{
	int aux;

	aux = stack_b->val;
	stack_b->val = stack_b->next->val;
	stack_b->next->val = aux;
//	write(1, "sb\n", 3);
}

void	*make_ss(t_list *stack_a, t_list *stack_b)
{
	t_list *aux;

	aux = stack_a;
	if (!stack_b)
		return (NULL);
	else
		make_sb(stack_b);
		make_sa(stack_a);
}

void	ft_push(t_list **stack, int val)
{
	//push agrega un nuevo nodo al principio del stack
	t_list *new_node;
	new_node = malloc(sizeof(t_list));
	new_node->val = val;
	new_node->next = NULL;

	if (*stack == NULL)
		*stack = new_node;
	else
	{
		t_list *current = *stack;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
}

int	ft_pop(t_list **stack)
{
	//pop quita y devuelve el valor del primer nodo del stack
	int val;

	if (*stack == NULL)
		exit (1);

	val = (*stack)->val;
	t_list	*temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	return (val);
}

void	make_pa(t_list **stack_a, t_list **stack_b)
{
	//toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.
	
	if (*stack_b != NULL)
	{
		t_list *first_node_b = *stack_b;
		*stack_b = first_node_b->next;
		if (*stack_a == NULL)
		{
			*stack_a = first_node_b;
			first_node_b->next = NULL;
		}
		else
		{
			first_node_b->next = *stack_a;
			*stack_a = first_node_b;
		}
	}
	//ft_push(stack_a, ft_pop(stack_b));
}

void	make_pb(t_list	*stack_b, t_list *stack_a)
{
	//toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío.

}

void	make_ra(t_list **stack_a)
{
	//desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.
	    if (*stack_a != NULL && (*stack_a)->next != NULL)
	    {
		    t_list *current = *stack_a;
		    while (current->next != NULL)
			    current = current->next;
		    current->next = *stack_a;        
		    *stack_a = (*stack_a)->next;
		    current->next->next = NULL;
	    }
}

void	make_rb(t_list *stack_b)
{
	//desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.
}

void	make_rr(t_list *stack_a, t_list *stack_b)
{
	//desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia arriba, de forma que el primer elemento se convierte en el último
	
}

void	make_rra(t_list *stack_a)
{
	// desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.
}

void	make_rrb(t_list *stack_b)
{
	//desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero
}

void	make_rrr(t_list *stack_a, t_list *stack_b)
{
	//desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia abajo, de forma que el último elemento se convierte en el primero.
}
