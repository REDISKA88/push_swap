#include "push_swap.h"
int	ft_find_top(t_stack *a, int range)
{
	int	top;

	top = 0;
	while (a)
	{
		if (a->index <= range)
		{
			top = a->pos;
			break ;
		}
		a = a->next;
	}
	return (top);
}

int	ft_find_bot(t_stack *a, int range)
{
	int	bot;

	while (a)
	{
		if (a->index <= range)
			bot = a->pos;
		a = a->next;
	}
	return (bot);
}

int	ft_find_maximal(t_stack *ab)
{
	t_stack	*tmp;

	tmp = ab;
	ab = ab->next;
	while (ab)
	{
		if (ab->index > tmp->index)
			tmp = ab;
		ab = ab->next;
	}
	return (tmp->pos);
}

void	ft_mid_sort(t_stack **a, t_stack **b, int range, t_tool *t)
{
	int	count;

	count = 0;
	while (*a)
	{
		count = ft_sorting(a, b, range, t);
		if (count == range)
			range = range + 20;
	}
	ft_continue_sort(a, b, t);
}

int	ft_sorting(t_stack **a, t_stack **b, int range, t_tool *t)
{
	t->s_count = 0;
	if (range > 20)
		t->s_count = (range - 20);
	while (t->s_count < range)
	{
		t->s_top_pos = ft_find_top(*a, range);
		t->s_bot_pos = ft_find_bot(*a, range);
		t->s_top_mov = (t->s_top_pos - 1);
		t->s_bot_mov = (ft_count_list(*a) - t->s_bot_pos) + 1;
		if (t->s_top_mov < t->s_bot_mov && t->s_top_mov > 0)
		{
			while (t->s_top_mov--)
				ft_rotate(a, "ra");
		}
		else if (t->s_bot_mov < t->s_top_mov && t->s_bot_mov > 0)
		{
			while (t->s_bot_mov--)
				ft_reverse_rotate(a, "rra");
		}
		ft_push(a, b, "pb");
		t->s_count++;
		ft_count_list(*a);
	}
	return (t->s_count);
}
