#include "push_swap.h"
#include "stdio.h"
//void ft_compare(t_stack **a, t_stack **b, t_stack *top, t_stack *bot)
//{
//	int	moves_top;
//	int moves_bot;
//	int size_list;
//
//	size_list = ft_count_list(*a);
//	moves_top = (ft_find_pos(*a,top) - 1);
//	moves_bot = (size_list - ft_find_pos(*a,bot));
//	if (moves_top <= moves_bot && moves_top > 0)
//	{
//		while (moves_top)
//		{
//			ft_rotate(a, "ra");
//			moves_top--;
//		}
//	}
//	if (moves_bot < moves_top && moves_bot > 0)
//	{
//		while (moves_bot)
//		{
//			ft_reverse_rotate(a, "rra");
//			moves_bot--;
//		}
//
//	}
//	ft_push(a,b, "pb");
//}
//
//void ft_big_case(t_stack **a, t_stack **b, int range)
//{
//	int i;
//	int top;
//	int bot;
//
//	i = 1;
//	while (a || i < range)
//	{
//		if (ft_count_list(*a) == 0)
//			break;
//		while ((*a)->index > range)
//			(*a) = (*a)->next;
//		top = *a;
//		bot = ft_find_last(*a,range);
//		ft_compare(a, b, top, bot);
//		i++;
//		if (i == range)
//			range = (range * 2);
//	}
//}

////// *****TRASH*****
//void ft_big_case(t_stack **a, t_stack **b, int range)
//{
//	int count;
//	t_stack *tmp;
//
//	tmp = *a;
//	count = 1;
//	while (*a)
//	{
//		while (count <= range && *a)
//		{
//			ft_to_b(a,b,range);
//			count++;
//		}
//		range = range + 20;
//	}
//}