#ifndef PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# define PUSH_SWAP_H
typedef struct s_stack {
	int				index;
	int				data;
	int				pos;
	struct s_stack	*next;
}					t_stack;

typedef struct s_tool {
	int	str;
	int	s_top_pos;
	int	s_bot_pos;
	int	s_top_mov;
	int	s_bot_mov;
	int	s_count;
	int	cs_max_pos;
	int	cs_max_mov;
	int	cs_bottom;
	int	cs_size;
	int	bs_top_pos;
	int	bs_bot_pos;
	int	bs_top_mov;
	int	bs_bot_mov;
	int	bs_count;
}				t_tool;

int		ft_valid(char **argv, t_tool *t);
int		ft_find_dupl(int pos, int argc, char **argv);
int		ft_argv_count(char **argv, t_tool *t);
int		ft_check_sorting(t_stack *a);
int		main(int argc, char **argv);
void	ft_swap(t_stack **ab, char *str);
void	ft_push(t_stack **from, t_stack **into, char *str);
void	ft_rotate(t_stack **ab, char *str);
void	ft_reverse_rotate(t_stack **ab, char *str);
void	ft_swap_swap(t_stack **a, t_stack **b);
void	ft_rotate_rotate(t_stack **a, t_stack **b);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_push_last(t_stack **from, t_stack **into, char *str);
int		ft_find_top(t_stack *a, int range);
int		ft_find_bot(t_stack *a, int range);
int		ft_find_maximal(t_stack *ab);
void	ft_mid_sort(t_stack **a, t_stack **b, int range, t_tool *t);
void	ft_big_sort(t_stack **a, t_stack **b, int range, t_tool *t);
int		ft_sorting(t_stack **a, t_stack **b, int range, t_tool *t);
void	ft_continue_sort(t_stack **a, t_stack **b, t_tool *t);
int		ft_bigsorting(t_stack **a, t_stack **b, int range, t_tool *t);
void	ft_free_list(t_stack **ab, int print);
void	ft_free_argv(char **argv);
void	ft_error(char *str, t_tool *t);
void	ft_putendl(char *s);
size_t	ft_strlen(const char *s);
t_stack	*ft_argv_to_list(int argc, char **argv, t_tool *t);
int		ft_count_list(t_stack *a);
void	ft_indexing(t_stack **a, int argc);
void	ft_mini_indexing(t_stack **a, int argc, int idx, int dmin);
t_stack	*ft_find_max(t_stack **ab);
t_stack	*ft_find_min(t_stack **ab);
t_stack	*ft_find_last(t_stack *tmp, int range);
int		ft_find_pos(t_stack *a, t_stack *pos);
void	ft_continue_iii(t_stack **a);
void	ft_case_iii(t_stack **a);
void	ft_case_iv(t_stack **a, t_stack **b);
void	ft_case_v(t_stack **a, t_stack **b);
void	ft_sort(t_stack **a, t_stack **b, int size, t_tool *t);
int		ft_countword(const char *s, char c);
char	*ft_substr(char const *str, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
void	ft_push_min_to_b(t_stack **a, t_stack **b);
void	ft_init_pos(t_stack *a, t_stack *b);
void	ft_check_number(long num);
int		ft_isdigit(int c);
int		ft_atoi(const char *str);
void	*ft_memcpy(void *dst, const void *src, size_t num);
char	*ft_strdup(const char *str);
void	ft_free_all(t_stack **ab, t_tool *t, char **argv, int print);
void	ft_free_lists(t_stack **ab, t_tool *t, int print);
#endif