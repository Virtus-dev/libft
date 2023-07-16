# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arigonza <arigonza@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/13 13:46:00 by arigonza          #+#    #+#              #
#    Updated: 2023/07/16 17:59:51 by arigonza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS  = -Wall -Wextra -Werror
NAME    = libft.a
AR		= ar -rcs
SRC		= \
	src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c src/ft_isprint.c \
	src/ft_strlen.c src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memcpy.c src/ft_memmove.c \
	src/ft_strlcpy.c src/ft_strlcat.c src/ft_toupper.c src/ft_tolower.c src/ft_strchr.c \
	src/ft_strrchr.c src/ft_strncmp.c src/ft_strcmp.c src/ft_memchr.c src/ft_memcmp.c src/ft_strnstr.c src/ft_atoi.c \
	src/ft_calloc.c src/ft_strdup.c src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_putstr.c src/ft_atol.c \
	src/ft_putendl_fd.c src/ft_putnbr_fd.c src/ft_striteri.c src/ft_strmapi.c src/ft_substr.c \
	src/ft_strjoin.c src/ft_strtrim.c src/ft_split.c \
	src/ft_itoa.c src/ft_lstnew_bonus.c src/ft_lstadd_front_bonus.c src/ft_is_space.c\
	src/ft_lstsize_bonus.c src/ft_lstlast_bonus.c src/ft_lstadd_back_bonus.c src/ft_lstdelone_bonus.c src/ft_lstclear_bonus.c src/ft_lstiter_bonus.c src/ft_lstmap_bonus.c \

OBJ		= ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compiling..."
	@$(AR) $(NAME) $(OBJ)
	@echo "Done"

clean:
	@echo "Cleaning..."
	@rm -rf $(OBJ)

fclean: clean
	@echo "Cleaning..."
	@rm -f $(NAME)

%.o: %.c
	@gcc $(CFLAGS) -I includes -o $@ -c $<

re: fclean all

.PHONY: all clean fclean re bonus