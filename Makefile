# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
		ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strnstr.c\
		ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memchr.c\
		ft_memcmp.c ft_calloc.c ft_strdup.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
		ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\ 
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Rules
all: $(NAME)

# Compile the library from the mandatory sources
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule for bonus part
bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

# Compile each .c file into .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Clean up everything, including the library and test executable
fclean: clean
	rm -f $(NAME)

# Recompile everything from scratch
re: fclean all

.PHONY: all clean fclean re bonus
