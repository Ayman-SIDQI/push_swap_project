NAME=push_swap

BONUS=checker

CC=cc

FLAG=-Wall -Wextra -g #-Werror

CFILE=push_swap.c \
	push_swap_utils.c \
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

BFILE=get_next_line_utils.c \
	get_next_line.c \
	checker.c \
	s_checker.c \
	p_checker.c \
	r_checker.c \
	list_functions.c \
	list_functions_2.c \
	fts.c \
	fts_2.c \
	fts_3.c \
	fts_4.c \
	ft_split.c \
	freedom.c \
	checker_sort.c \
	push_swap_utils.c \
	checkerrors.c

OBJ=${CFILE:.c=.o}

OBJ_BON=${BFILE:.c=.o}

all: $(NAME)

bonus: $(BONUS)

$(NAME): ${OBJ}
	@${CC} ${FLAG} $^ -o $@

$(BONUS): ${OBJ_BON}
	@${CC} ${FLAG} $^ -o $@

%.o: %.c
	@${CC} ${FLAG} -c $< -o $@

clean:
	@rm -fr ${OBJ} ${OBJ_BON}

fclean:
	@rm -fr ${OBJ} ${OBJ_BON} ${NAME} ${BONUS}

re: fclean all

.PHONY:all fclean clean bonus