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

void print_index(t_stack *a)
{
	while (a)
	{
		printf("%d pos : %d idx: %d\n", a->data,a->pos, a->index);
		a = a->next;
	}
}
void ft_swap(t_stack *ab, char *str)
{
	t_stack temp;

	temp.data = ab->data;
	ab->data = ab->next->data;
	ab->next->data = temp.data;
	ft_putendl(str);
}

void ft_swap_swap(t_stack *a, t_stack *b)
{
	ft_swap(a,"ss");
	ft_swap(b, "ss");
	write(1, "ss\n", 3);
}

void ft_push(t_stack **from, t_stack **into, char *str)
{
	t_stack *tmp;

	tmp = (*from)->next;
	(*from)->next = *into;
	*into = *from;
	*from = tmp;
	ft_putendl(str);
}

void ft_rotate(t_stack **ab, char *str)
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
	ft_putendl(str);
}

void ft_rotate_rotate(t_stack **a, t_stack **b)
{
	ft_rotate(a,"rr");
	ft_rotate(b, "rr");
	write(1,"rr\n", 3);
}

void ft_reverse_rotate(t_stack **ab, char *str)
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
	ft_putendl(str);
}

void ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a, "rrr");
	ft_reverse_rotate(b, "rrr");
	write(1,"rrr\n", 4);
}
