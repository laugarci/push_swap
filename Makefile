# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/10 12:17:45 by laugarci          #+#    #+#              #
#    Updated: 2023/05/18 18:22:22 by laugarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

HEADER	= push_swap.h
INCLUDE = -I ./
CC 		= gcc
CFLAGS	= -Wall -Wextra -Werror
NORM	= norminette -R CheckForbiddenSourceHeader
RM		= rm -f

SRC_FILES	=  ft_atol.c \
		   ft_bits.c \
		   index.c \
		   init_stacks_lists.c \
		   push_swap.c \
		   small_stack.c \
		   small_stack_aux.c \
		   sort_operations.c \
		   check_args.c \
		   ft_isdigit.c

SRC_OBJ		= $(SRC_FILES:.c=.o)

SRC_DEPS	= $(SRC_FILES:.c=.d)

all: $(NAME)

%.o: %.c $(HEADER) Makefile
	@$(CC) -MMD $(INCLUDE) -c $< -o $@
	@echo "Compiling $<..."

$(NAME): $(SRC_OBJ) $(HEADER)
	@$(CC) $(CFLAGS) $(INCLUDE) $(SRC_OBJ) -o $(NAME)
	@echo "Executable compiled!"

clean:
	@$(RM) $(SRC_OBJ) $(SRC_DEPS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

norm:
	$(NORM)

-include $(SRC_DEPS)

.PHONY: all clean fclean re norm
