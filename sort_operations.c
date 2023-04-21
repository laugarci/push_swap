#include "push_swap.h"

void	*make_sa(t_list *stack_a)
{
	//FUNCIONA. intercambia los dos numeros de encima del stack_a
	int aux;
	

	aux = stack_a->val;
	stack_a->val = stack_a->next->val;
	stack_a->next->val = aux;
//	write(1, "sa\n", 3);
}

void	*make_sb(t_list *stack_b)
{
	//FUNCIONA. intercambia los dos numeros de encima del stack_b
	int aux;

	aux = stack_b->val;
	stack_b->val = stack_b->next->val;
	stack_b->next->val = aux;
//	write(1, "sb\n", 3);
}

void	*make_ss(t_list *stack_a, t_list *stack_b)
{
	//NO FUNCIONA swap a y b
	t_list	*aux;

	aux = stack_tta
	stack_a = stack_b;
	stack_b = aux;
}

void	*make_pa(t_list *stack_a)
{
	//toma el primer elemento del stack b y lo pone encima del stack a. No hace nada si b está vacío.
}

void	*make_pb(t_list	*stack_b)
{
	//toma el primer elemento del stack a y lo pone encima del stack b. No hace nada si a está vacío.	
}

void	*make_ra(t_list *stack_a)
{
	//desplaza hacia arriba todos los elementos del stack a una posición, de forma que el primer elemento se convierte en el último.
}

void	*make_rb(t_list *stack_b)
{
	//desplaza hacia arriba todos los elementos del stack b una posición, de forma que el primer elemento se convierte en el último.
}

void	*make_rr(t_list *stack_a, t_list *stack_b)
{
	//desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia arriba, de forma que el primer elemento se convierte en el último
	
}

void	*make_rra(t_list *stack_a)
{
	// desplaza hacia abajo todos los elementos del stack a una posición, de forma que el último elemento se convierte en el primero.
}

void	*make_rrb(t_list *stack_b)
{
	//desplaza hacia abajo todos los elementos del stack b una posición, de forma que el último elemento se convierte en el primero
}

void	*make_rrr(t_list *stack_a, t_list *stack_b)
{
	//desplaza al mismo tiempo todos los elementos del stack a y del stack b una posición hacia abajo, de forma que el último elemento se convierte en el primero.
}
