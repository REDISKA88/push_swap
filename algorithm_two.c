#include "push_swap.h"
void	ft_continue_sort(t_stack **a, t_stack **b, t_tool *t)
{
	t->cs_size = ft_count_list(*b);
	while (t->cs_size)
	{
		t->cs_size = ft_count_list(*b);
		t->cs_max_pos = ft_find_maximal(*b);
		t->cs_max_mov = (t->cs_max_pos - 1);
		t->cs_bottom = (t->cs_size - t->cs_max_pos) + 1;
		if (t->cs_max_mov <= t->cs_bottom && t->cs_max_mov > 0)
		{
			while (t->cs_max_mov--)
				ft_rotate(b, "rb");
		}
		if (t->cs_bottom < t->cs_max_mov && t->cs_bottom > 0)
		{
			while (t->cs_bottom--)
				ft_reverse_rotate(b, "rrb");
		}
		ft_push(b, a, "pa");
		t->cs_size--;
	}
}

int	ft_bigsorting(t_stack **a, t_stack **b, int range, t_tool *t)
{
	t->bs_count = 0;
	if (range > 40)
		t->bs_count = (range - 40);
	while (t->bs_count < range)
	{
		t->bs_top_pos = ft_find_top(*a, range);
		t->bs_bot_pos = ft_find_bot(*a, range);
		t->bs_top_mov = (t->bs_top_pos - 1);
		t->bs_bot_mov = (ft_count_list(*a) - t->bs_bot_pos) + 1;
		if (t->bs_top_mov < t->bs_bot_mov && t->bs_top_mov > 0)
		{
			while (t->bs_top_mov--)
				ft_rotate(a, "ra");
		}
		else if (t->bs_bot_mov < t->bs_top_mov && t->bs_bot_mov > 0)
		{
			while (t->bs_bot_mov--)
				ft_reverse_rotate(a, "rra");
		}
		ft_push(a, b, "pb");
		t->bs_count++;
		ft_count_list(*a);
	}
	return (t->bs_count);
}

void	ft_big_sort(t_stack **a, t_stack **b, int range, t_tool *t)
{
	int	count;

	count = 0;
	while (*a)
	{
		count = ft_bigsorting(a, b, range, t);
		if (count == range)
			range = range + 40;
	}
	ft_continue_sort(a, b, t);
}
