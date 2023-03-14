NAME=push_swap

BONUS=checker

CC=cc

FLAG=-Wall -Wextra -Werror

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

BFILE=	bonus/get_next_line_utils.c \
		bonus/get_next_line.c \
		bonus/checker_bonus.c \
		bonus/s_checker_bonus.c \
		bonus/p_checker_bonus.c \
		bonus/r_checker_bonus.c \
		bonus/list_functions_bonus.c \
		bonus/list_functions_2_bonus.c \
		bonus/fts_bonus.c \
		bonus/fts_2_bonus.c \
		bonus/fts_3_bonus.c \
		bonus/fts_4_bonus.c \
		bonus/ft_split_bonus.c \
		bonus/freedom_bonus.c \
		bonus/checker_sort_bonus.c \
		bonus/push_swap_utils_bonus.c \
		bonus/checkerrors_bonus.c

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