#include "push_swap.h"
#include "stdio.h"
void prints(t_stack *a)
{
	while (a)
	{
		printf("%d\n", a->data);
		a = a->next;
	}
}
void ft_swap(t_stack *ab)
{
	t_stack temp;
	temp.data = ab->data;
	ab->data = ab->next->data;
	ab->next->data = temp.data;
}

void ft_swap_swap(t_stack *a, t_stack *b)
{
	ft_swap(a);
	ft_swap(b);
}

void ft_push(t_stack **from, t_stack **into)
{
	t_stack *tmp;
	tmp = (*from)->next;
	(*from)->next = *into;
	*into = *from;
	*from = tmp;
}

void ft_rotate(t_stack **ab)
{
	t_stack *up;
	t_stack *sec;

	up = (*ab);
	sec = up->next;
	(*ab) = (*ab)->next;
	while (sec->next != NULL)
		sec = sec->next;
	sec->next = up;
	up->next = NULL;
}

void ft_rotate_rotate(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
}

void ft_reverse_rotate(t_stack **ab)
{
	t_stack *list;
	t_stack *last;

	list = *ab;
	while (list->next->next != NULL)
		list = list->next;
	last = list->next;
	list->next = NULL;
	last->next  = *ab;
	*ab = last;
}

void ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
}
