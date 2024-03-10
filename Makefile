NAME = push_swap
CC = gcc
RM = rm -rf
FLAGS = -Wall -Wextra -Werror
OBJ_DIR = obj/
BONUS = checker
SRC_DIR = Mondatory/

SRC1 = Mondatory/pushi_swapi.c \

SRC2 =	Mondatory/do_root_push.c \
		Mondatory/ft_ab_ba_root.c \
		Mondatory/ft_all_sorting.c \
		Mondatory/ft_check_arguments.c \
		Mondatory/ft_duplicate_check.c \
		Mondatory/ft_extra_utils.c \
		Mondatory/ft_take_args.c \
		Mondatory/movements0.c \
		Mondatory/movements1.c \
		Mondatory/movements2.c \
		Mondatory/problem_solv_0.c \
		Mondatory/problem_solv_1.c \
		Mondatory/stack_utils_0.c \
		Mondatory/stack_utils_1.c \
		Mondatory/ft_atoi.c \
		Mondatory/ft_split.c \
		Mondatory/ft_strdup.c \
		Mondatory/ft_strlcpy.c \
		Mondatory/ft_strlen.c \
		Mondatory/ft_substr.c

		
BONUS_SRC = Bonus/checker.c \
			Bonus/get_next_line.c \
			Bonus/get_next_line_utils.c
			

OBJ1 = ${SRC1:.c=.o}

OBJ2 = ${SRC2:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o}

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ1} ${OBJ2}
	${CC} ${FLAGS} ${OBJ1} ${OBJ2} -o ${NAME} 

${BONUS}: ${OBJ2} ${BONUS_OBJ} 
	${CC} ${FLAGS} ${BONUS_OBJ} ${OBJ2} -o ${BONUS}

all: ${NAME} ${BONUS}

bonus: ${BONUS}

clean:
	${RM} ${OBJ1} ${OBJ2} ${BONUS_OBJ}

fclean: clean
	${RM} ${NAME} ${BONUS}

re: clean all

build: re clean
	clear

.PHONY: all clean fclean re bonus