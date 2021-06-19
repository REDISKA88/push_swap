#include "push_swap.h"
void	ft_push_min_to_b(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = NULL;
	while (tmp != *a)
	{
		tmp = ft_find_min(a);
		if (tmp->next == *a)
			ft_swap(a, "sa");
		else if (tmp == (*a)->next->next)
		{
			ft_reverse_rotate(a, "ra");
			ft_swap(a, "sa");
		}
		else if (tmp->next ==NULL)
			ft_reverse_rotate(a, "rra");
		else if (tmp->next->next == NULL)
			ft_reverse_rotate(a, "ra");
	}
	ft_push(a, b, "pb");
}

void	ft_init_pos(t_stack *a, t_stack *b)
{
	int	pos;

	pos = 1;
	while (a)
	{
		a->pos = pos;
		a = a->next;
		pos++;
	}
	pos = 1;
	while (b)
	{
		b->pos = pos;
		b = b->next;
		pos++;
	}
}

void	ft_check_number(long num)
{
	if (num > 2147483647)
	{
		ft_putendl("Error");
		exit(1);
	}
	if (num < -2147483648)
	{
		ft_putendl("Error");
		exit(1);
	}
}

void	ft_free_lists(t_stack **ab, t_tool *t, int print)
{
	t_stack	*tmp;
	t_stack	*list;

	list = *ab;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*ab = NULL;
	free(t);
	if (print == 1)
		ft_putendl("Error");
	exit(1);
}
