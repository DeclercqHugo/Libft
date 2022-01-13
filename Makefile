# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 10:50:38 by hdeclerc          #+#    #+#              #
#    Updated: 2022/01/13 17:39:41 by hdeclerc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
	  ft_bzero.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_isalnum.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_memset.c \
	  ft_strchr.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strncmp.c \
	  ft_strnstr.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_calloc.c \
	  ft_strdup.c \
	  ft_strrchr.c \
	  ft_strlcpy.c \
	  ft_substr.c \
	  ft_strjoin.c \
	  ft_putchar_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_putstr_fd.c \
	  ft_itoa.c \
	  ft_strtrim.c \
	  ft_split.c \
	  ft_strmapi.c \
	  ft_striteri.c \
	  
SRC_BONUS = ft_lstnew.c \
	 	ft_lstadd_front.c \
	  	ft_lstsize.c \
	  	ft_lstlast.c \
	  	ft_lstadd_back.c \
	  	ft_lstdelone.c \
	  	ft_lstclear.c \
	  	ft_lstiter.c \
	  	ft_lstmap.c \


OBJ = $(SRC:.c=.o)
OBJS_BONUS	= ${SRC_BONUS:.c=.o}

CC			=	clang

all: $(NAME)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

bonus:		${OBJS_BONUS}
	@ar -rcs ${NAME} ${OBJS_BONUS}

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: 
	@rm -f $(OBJ) $(OBJS_BONUS)
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

bclean:
	@rm -f $(OBJS_BONUS)
	@echo "OBJS_BONUS deleted"

re: fclean all

.PHONY: all, clean, fclean, re