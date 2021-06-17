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