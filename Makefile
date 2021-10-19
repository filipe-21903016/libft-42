NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_atoi.c \
	   ft_strcmp.c ft_strncmp.c \
	   ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	   ft_isascii.c ft_isprint.c ft_strdup.c \
	   ft_tolower.c ft_toupper.c ft_strcpy.c \
	   ft_strncpy.c ft_strcat.c ft_strncat.c \
	   ft_strlcpy.c ft_strlcat.c ft_strchr.c \
	   ft_strrchr.c ft_memset.c ft_calloc.c \
	   ft_memchr.c ft_memcmp.c ft_memcpy.c \
	   ft_memmove.c

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
