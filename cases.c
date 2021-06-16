#include "push_swap.h"
#include "stdio.h"
void ft_case_c(t_stack **a, t_stack **b, int range)
{
	t_stack	*tmp;
	t_stack *top;
	t_stack *bot;
	(void) b;
	tmp = *a;
	printf("tmp: %d\n", tmp->data);
	while (tmp)
	{
		if (tmp->index <= range)
		{
			top = tmp;
			printf("top cicle: %d\n", top->pos);
			break;
		}
		tmp = tmp->next;
	}
	bot = ft_find_second(tmp,range);
	printf("bot: %d\n", bot->pos);
	//ft_continue_c();
}