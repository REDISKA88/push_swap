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

//newcode
//               algorithm.c
//
int ft_find_top(t_stack *a, int range);
int ft_find_bot(t_stack *a, int range);

int ft_find_maximal(t_stack *a);
void print_b(t_stack *a);
void print_a(t_stack *a);

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
void ft_push_last(t_stack **from, t_stack **into, char *str);

int ft_find_dupl(int pos, int argc, char **argv);

void ft_indexing(t_stack **a, int argc);
void ft_mini_indexing(t_stack **a, t_stack *ls, int argc, int idx, int datamin);
void ft_compare(t_stack **a, t_stack **b, t_stack *top, t_stack *bot);


void ft_push_min_to_b(t_stack **a, t_stack **b);
int ft_count_list(t_stack *a);

int	ft_countword(const char *s, char c);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t num);
size_t	ft_strlen(const char *s);
void ft_sort(t_stack **a, t_stack **b, int size);
void ft_continue_iii(t_stack **a);
void ft_case_iii(t_stack **a);
void ft_case_iv(t_stack **a, t_stack **b);
void ft_case_v(t_stack **a, t_stack **b);
void ft_mid_sort(t_stack **a, t_stack **b, int range);
int ft_sorting(t_stack **a, t_stack **b, int range);
void ft_continue_sort(t_stack **a, t_stack **b);
void ft_big_sort(t_stack **a, t_stack **b, int range);
int ft_bigsorting(t_stack **a, t_stack **b, int range);
t_stack *ft_find_max(t_stack **ab);
t_stack *ft_find_min(t_stack **ab);
t_stack *ft_find_last(t_stack *tmp, int range);
int ft_find_pos(t_stack *a, t_stack *pos);


int	ft_atoi(const char *str);
int	ft_isdigit(int c);
void	ft_putendl(char *s);;
void prints(t_stack *a);

#endif