#include "push_swap.h"
void ft_continue_sort(t_stack **a, t_stack **b)
{
	int max_pos;
	int max_mov;
	int size;

	size = ft_count_list(*b);
	while (size)
	{
		ft_count_list(*b);
		max_pos = ft_find_maximal(*b);
		max_mov = (max_pos - 1);
		while (max_mov--)
			ft_rotate(b,"rb");
		ft_push(b,a,"pa");
		size--;
	}
}

int ft_bigsorting(t_stack **a, t_stack **b, int range)
{
	int top_pos;
	int bot_pos;
	int top_mov;
	int bot_mov;
	int count;

	count = 0;
	if (range > 45)
		count = (range - 45);
	while (count < range)
	{
		top_pos = ft_find_top(*a, range);
		bot_pos = ft_find_bot(*a, range);
		top_mov = (top_pos - 1);
		bot_mov = (ft_count_list(*a) - bot_pos) + 1;
		if (top_mov < bot_mov && top_mov > 0)
		{

			while (top_mov--)
				ft_rotate(a,"ra");
		}
		if (bot_mov < top_mov && bot_mov > 0)
		{
			while (bot_mov--)
				ft_reverse_rotate(a,"rra");
		}
		ft_push(a,b,"pb");
		count++;
		ft_count_list(*a);
	}
	return count;
}
void ft_big_sort(t_stack **a, t_stack **b, int range)
{
	int count;

	count = 0;
	while (*a)
	{
		count = ft_bigsorting(a, b, range);
		if (count == range)
			range = range + 45;
	}
	ft_continue_sort(a,b);
}