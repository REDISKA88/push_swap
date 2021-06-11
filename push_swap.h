#ifndef PUSH_SWAP_H
#include <stdlib.h>
#include <unistd.h>

typedef struct	s_stack {
	int	data;
	struct s_stack *next;
	struct s_stack *prev;
}				t_stack;

#define PUSH_SWAP_H
int	main(int argc, char *argv[]);
int ft_valid(char **argv);
t_stack *ft_argv_to_list(int argc, char **argv);

void ft_swap(t_stack *ab);
void ft_swap_swap(t_stack *a, t_stack *b);
void ft_push(t_stack **from, t_stack **into);
void ft_rotate(t_stack **ab);
void ft_reverse_rotate(t_stack **ab);
void ft_rrr(t_stack **a, t_stack **b);

int ft_find_dupl(int pos, int argc, char **argv);
void ft_sort(t_stack **a, t_stack **b, int size);

void ft_continue_iii(t_stack **a);
void ft_case_iii(t_stack **a);




t_stack *ft_find_max(t_stack **ab);
t_stack *ft_find_min(t_stack **ab);


int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void prints(t_stack *a);

#endif