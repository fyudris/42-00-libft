# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strnstr.c\
		ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c
# BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c
OBJS = $(SRCS:.c=.o)
# BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Test Variables
# TEST_DIR = tests
# TEST_SRC = $(TEST_DIR)/main.c $(TEST_DIR)/test_ft_memset.c $(TEST_DIR)/test_ft_isalpha.c # Add all test source files here
# TEST_OBJS = $(TEST_SRC:.c=.o)
# TEST_EXEC = test_libft

INCLUDES = -I.

# Rules
all: $(NAME)

# Compile the library from the mandatory sources
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule for bonus part
#bonus: $(OBJS) $(BONUS_OBJS)
#	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Compile each .c file into .o object files
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS)
#	rm -f $(OBJS) $(BONUS_OBJS) $(TEST_OBJS)

# Clean up everything, including the library and test executable
fclean: clean
	rm -f $(NAME)
#	rm -f $(NAME) $(TEST_EXEC)

# Recompile everything from scratch
re: fclean all

# Compile and run tests
# test: $(NAME) $(TEST_OBJS)
#	$(CC) $(CFLAGS) -o $(TEST_EXEC) $(TEST_OBJS) -L. -lft
#	./$(TEST_EXEC)

# Run tests for mandatory part only
# test_mandatory: re test

# Run tests with bonus part included
# test_bonus: fclean bonus test

.PHONY: all clean fclean re
#.PHONY: all clean fclean re test test_mandatory test_bonus
