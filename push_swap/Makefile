NAME=push_swap

CC=cc

FLAG=-Wall -Wextra -g #-Werror

CFILE=push_swap.c \
	list_functions.c \
	list_functions_2.c \
	fts.c \
	fts_2.c \
	fts_3.c \
	fts_4.c \
	ft_split.c \
	freedom.c \
	checkerrors.c \
	s.c \
	p.c \
	r.c \
	sorter_1.c \
	checker_sort.c \
	sorter_2.c \
	sorter_3.c

OBJ=${CFILE:.c=.o}

all: $(NAME)

$(NAME): ${OBJ}
	@${CC} ${FLAG} $^ -o $@

%.o: %.c
	@${CC} ${FLAG} -c $< -o $@

clean:
	@rm -fr ${OBJ}

fclean:
	@rm -fr ${OBJ} ${NAME}

re: fclean all