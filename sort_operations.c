#include "push_swap.h"


void	make_sa(t_list **stack_a)
{
	//intercambia los dos primeros elementos encima del stack_a. No hace nada si hay uno o menos elementos
	t_list	*first;
	t_list	*second;
	int	temp;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		    return;
	first = *stack_a;
	second = (*stack_a)->next;
	temp = first->val;
	first->val = second->val;
	second->val = temp;
}

void	make_sb(t_list *stack_b)
{
	//intercambia los dos primeros elementos encima del stack_b. No hace nada si hay uno o menos elementos
	int aux;

	aux = stack_b->val;
	stack_b->val = stack_b->next->val;
	stack_b->next->val = aux;
}

void	*make_ss(t_list *stack_a, t_list *stack_b)
{
	//sa y sb a la vez
	if (!stack_b)
		return (NULL);
	else
		make_sb(stack_b);
		make_sa(&stack_a);
}

void	ft_push(t_list **stack, int val)
{
	//agrega un nuevo nodo al principio del stack
	t_list *new_node;
	t_list *current;

	new_node = malloc(sizeof(t_list));
	new_node->val = val;
	new_node->next = NULL;

	if (*stack == NULL)
		*stack = new_node;
	else
	{
		current = *stack;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
}

int	ft_pop(t_list **stack)
{
	//quita y devuelve el valor del primer nodo del stack
	int val;
	t_list	*temp;

	if (*stack == NULL)
		exit (1);
	val = (*stack)->val;
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	return (val);
}

void	make_pa(t_list **stack_a, t_list **stack_b)
{
	//toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.
	t_list *first_node_b;

	if (*stack_b != NULL)
	{
		first_node_b = *stack_b;
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

void	make_pb(t_list	**stack_b, t_list **stack_a)
{
	//toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío.
	t_list *first_node_a;

	if (*stack_a != NULL)
	{
		first_node_a = *stack_a;
		*stack_a = first_node_a->next;
		if (*stack_b == NULL)
		{
			*stack_b = first_node_a;
			first_node_a->next = NULL;
		}
		else
		{
			first_node_a->next = *stack_b;
			*stack_b = first_node_a;
		}
	}

}

void	make_ra(t_list **stack_a)
{
	//desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.
	t_list *current;
	if (*stack_a != NULL && (*stack_a)->next != NULL)
	    {
		    current = *stack_a;
		    while (current->next != NULL)
			    current = current->next;
		    current->next = *stack_a;        
		    *stack_a = (*stack_a)->next;
		    current->next->next = NULL;
	    }
}

void	make_rb(t_list **stack_b)
{
	//desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.
	t_list *current;
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		current = *stack_b;
		while (current->next != NULL)
			current = current->next;
		current->next = *stack_b;
		*stack_b = (*stack_b)->next;
		current->next->next = NULL;
	}
}

void	make_rr(t_list *stack_a, t_list *stack_b)
{
	//desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia arriba, de forma que el primer elemento se convierte en el último
}

void	make_rra(t_list **stack_a)
{
	// desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.i
	t_list *current;   
       	t_list *prev;

	current = *stack_a;
	prev = NULL;
	if (current == NULL || current->next== NULL)
		return;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *stack_a;
	*stack_a = current;
	prev->next = NULL;
}

void	make_rrb(t_list **stack_b)
{
	//desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero
	t_list	*current;
	t_list	*prev;

	current = *stack_b;
	prev = NULL;
	if (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *stack_b;
	*stack_b = current;
	prev->next = NULL;
}

void	make_rrr(t_list *stack_a, t_list *stack_b)
{
	//desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia abajo, de forma que el último elemento se convierte en el primero.
}
