NAME	= push_swap

HEADER	= push_swap.h
INCLUDE = -I ./

NORM	= norminette -R CheckForbiddenSourceHeader
RM		= rm -f
AR		= $(CC) $(CFLAGS) -o $(NOMBRE) $(OBJS)

SRC_FILES	=  ft_atoi.c \
		   ft_bits.c \
		   index.c \
		   init_stacks_lists.c \
		   push_swap.c \
		   small_stack.c \
		   sort_operations.c \
		   sort_operations_2.c

SRC_OBJ		= $(SRC_FILES:.c=.o)

SRC_DEPS	= $(SRC_FILES:.c=.d)

all: $(NAME)

%.o : %.c Makefile
	@$(CC) -MMD $(INCLUDE) -c $< -o $@
	@echo "Compilimg $<..."

$(NAME) : $(SRC_OBJ)
	@$(AR) $(NAME) $(SRC_OBJ)
	@echo Library compiled!


clean:
	@$(RM) $(SRC_OBJ) $(SRC_DEPS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

norm:
	$(NORM)

-include $(SRC_DEPS)

.PHONY: all clean fclean re norm
