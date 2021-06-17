#include "push_swap.h"

int ft_find_top(t_stack *a, int range)
{
	int top;
	top = 0;
	while (a)
	{
		if (a->index <= range)
		{
			top = a->pos;
			break;
		}
		a = a->next;
	}
	return top;
}

int ft_find_bot(t_stack *a, int range)
{
	int bot;

	while (a)
	{
		if (a->index <= range)
			bot = a->pos;
		a = a->next;
	}
	return bot;
}
int ft_find_maximal(t_stack *ab)
{
	t_stack *tmp;

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

void ft_mid_sort(t_stack **a, t_stack **b, int range)
{
	int count;

	count = 0;
	while (*a)
	{
		count = ft_sorting(a, b, range);
		if (count == range)
			range = range + 20;
	}
	ft_continue_sort(a,b);
}

int ft_sorting(t_stack **a, t_stack **b, int range)
{
	int top_pos;
	int bot_pos;
	int top_mov;
	int bot_mov;
	int count;

	count = 0;
	if (range > 20)
		count = (range - 20);
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
//void ft_brazhnik_sort(t_stack *a, t_stack *b, int size)
//{
//	int index_max;
//
//	index_max = ft_find_maximal(a);
//	while (size > 3)
//	{
//		if (a->index < (index_max - 2))
//		{
//			ft_push(&a,&b,"pb");
//			size--;
//		}
//		a = a->next;
//	}
//}