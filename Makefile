SRCS	=	actions.c \
            actions_add.c \
            algorithm.c \
            algorithm_two.c \
            essential.c \
            list_func.c \
            push_swap.c \
            search.c \
            sort.c \
            split.c \
            tricks.c \
            utils.c \

NAME		=	push_swap

CFLAGS		=	-Wall -Werror -Wextra -o

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) $(CFLAGS) $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all bonus clean fclean re
