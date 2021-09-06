NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_atoi.c ft_putchar.c \
	   ft_putstr.c ft_strcmp.c ft_strncmp.c \
	   ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	   ft_isascii.c ft_isprint.c ft_strdup.c \
	   ft_tolower.c ft_toupper.c ft_strcpy.c \
	   ft_strncpy.c

OBJS = $(SRCS:.c=.o)
RM = rm -f
INCLUDES = libft.h

.c.o:
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
