NAME = push_swap

CC = gcc

RM = rm -rf

FLAGS = -Wall -Wextra -Werror

BONUS = checker

SRC1 = Mondatory/pushi_swapi.c \

SRC2 =	Mondatory/do_root_push.c Mondatory/ft_ab_ba_root.c Mondatory/ft_all_sorting.c Mondatory/ft_check_arguments.c Mondatory/ft_duplicate_check.c \
		Mondatory/ft_extra_utils.c Mondatory/ft_take_args.c Mondatory/movements0.c Mondatory/movements1.c Mondatory/movements2.c Mondatory/problem_solv_0.c \
		Mondatory/problem_solv_1.c Mondatory/stack_utils_0.c Mondatory/stack_utils_1.c Mondatory/ft_atoi.c Mondatory/ft_split.c Mondatory/ft_strdup.c \
		Mondatory/ft_strlcpy.c Mondatory/ft_strlen.c Mondatory/ft_substr.c \

BONUS_SRC = Bonus/checker.c Bonus/get_next_line.c Bonus/get_next_line_utils.c \
			
MAIN = ${SRC1:.c=.o}

OBJ = ${SRC2:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${MAIN} ${OBJ}
	${CC} ${FLAGS} ${MAIN} ${OBJ} -o ${NAME} 

${BONUS}: ${OBJ} ${BONUS_OBJ} 
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ} -o ${BONUS}

all: ${NAME}

bonus: ${BONUS}

clean:
	${RM} ${MAIN} ${OBJ} ${BONUS_OBJ}

fclean: clean
	${RM} ${NAME} ${BONUS}

re: clean all

build: all bonus clean
	clear

.PHONY: all clean fclean re bonus
