#ifndef PUSH_SWAP_H
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_stack {
	int	index;
	int	data;
	int pos;
	struct s_stack *next;
}				t_stack;

#define PUSH_SWAP_H
int	main(int argc, char *argv[]);
int ft_valid(char **argv);
t_stack *ft_argv_to_list(int argc, char **argv);
void print_index(t_stack *a);
void ft_swap(t_stack *ab, char *str);
void ft_swap_swap(t_stack *a, t_stack *b);
void ft_push(t_stack **from, t_stack **into, char *str);
void ft_rotate(t_stack **ab, char *str);
void ft_reverse_rotate(t_stack **ab, char *str);
void ft_rrr(t_stack **a, t_stack **b);

int ft_find_dupl(int pos, int argc, char **argv);
void ft_sort(t_stack **a, t_stack **b, int size);
void ft_indexing(t_stack **a, int argc);
void ft_mini_indexing(t_stack **a, t_stack *ls, int argc, int idx, int datamin);

void ft_push_min_to_b(t_stack **a, t_stack **b);
int ft_count_list(t_stack *a);
void ft_continue_iii(t_stack **a);
void ft_case_iii(t_stack **a);
void ft_case_iv(t_stack **a, t_stack **b);
void ft_case_v(t_stack **a, t_stack **b);
void ft_case_c(t_stack **a, t_stack **b, int range);


t_stack *ft_find_max(t_stack **ab);
t_stack *ft_find_min(t_stack **ab);
t_stack *ft_find_second(t_stack *tmp, int range);
int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void	ft_putendl(char *s);;
void prints(t_stack *a);


//magic
int			which_x_amount(t_stack **b, int pos);
int			rrb_x_amount(t_stack **b, int pos);
int			rb_x_amount(t_stack **b, int pos);
int			pos_for_b(t_stack **a, t_stack **b);
int			sort_b_big_or_small(t_stack **a, t_stack **b);
long	smallest_finder(t_stack *b);
long	biggest_finder(t_stack *a);
int		before_push_b(t_stack **a, t_stack **b);
int	a_handle_while_range(t_stack **a, t_stack **b, int range_pos, int chunk);
int		bulky_med(t_stack **a, t_stack **b, int i);
int		tot_value(t_stack *a);
int		push_b_and_write(t_stack **a, t_stack **b);
int		my_insert_sort(t_stack **a, t_stack **b, int i);
int		range_pos_funct(t_stack *a, int local_max);
int		tot_b(t_stack *b);
void	rotate_b(t_stack **nums);
void	reverse_rotate_b(t_stack **nums);
void		push_b(t_stack **a, t_stack **b);
int		min_finder(t_stack *a, int min);
int		pos_finder(t_stack *a, int pos, int small);
int		push_and_find(t_stack **a, t_stack **b, int small);
int		ra_or_rra(t_stack **a, int tot, int pos);
void	rotate_a(t_stack **nums);
int		ra_or_rra_two(t_stack **a, int tot_minus_pos, int i);
void	reverse_rotate_a(t_stack **nums);
int		bulky_med(t_stack **a, t_stack **b, int i);
int		b_small_pos_funct(t_stack *b, int b_smallest);
int		final_confirmed_ordered(t_stack *nums, t_stack *b);
int		range(t_stack *a, int local_max);
int		ra_x_amount(t_stack **a, int pos);
int		rra_x_amount(t_stack **a, int pos);
int		a_which_x_amount(t_stack **a, int range_pos);
int		b_empty_or_one(t_stack **a, t_stack **b);
int		rb_or_rrb_one_hundered(t_stack **a, t_stack **b, int tot);
int		rb_or_rrb_one_hun_two(t_stack **a, t_stack **b, int pos, int tot);
int		rb_or_rrb_one_hun_one(t_stack **a, t_stack **b, int pos, int i);
void		push_a(t_stack **a, t_stack **b);
#endif