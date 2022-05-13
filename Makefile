# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hdeclerc <hdeclerc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 10:50:38 by hdeclerc          #+#    #+#              #
#    Updated: 2022/05/13 16:35:57 by hdeclerc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COMPILATION
CC				=	@gcc
CFLAGS			=	-Wall -Wextra -Werror

# VARIABLES
FT				:=	libft
FT_STD			:=	libftstd
FT_PRINTF		:=	libftprintf
FT_GNL			:=	libftgnl
NAME			:=	${FT}.a
NAME_STD		:=	${FT_STD}.a
NAME_PRINTF		:=	${FT_PRINTF}.a
NAME_GNL		:=	${FT_GNL}.a

FOLDER_STD		:=	Srcs/functions/
FOLDER_GNL		:=	Srcs/get_next_line/
FOLDER_PRINTF	:=	Srcs/ft_printf/

# FILES

SRCS_TYPE		:=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_tolower.c \
					ft_toupper.c
SRCS_LIST		:=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c
SRCS_MEMORY		:=	ft_bzero.c \
					ft_calloc.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c 
SRCS_STDIO		:=	ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c 	
SRCS_STRING		:=	ft_atoi.c \
					ft_itoa.c \
					ft_split.c \
					ft_strchr.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c 
SRCS_PRINTF		:=	ft_char.c \
					ft_dec.c \
					ft_decns.c \
					ft_hexmaj.c \
					ft_hexmin.c \
					ft_pntr.c \
					ft_printf.c \
					ft_str.c 
SRCS_GNL		:=	get_next_line.c

OBJS_STD		:=	$(addprefix ${FOLDER_STD}ft_type/, ${SRCS_TYPE:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_list/, ${SRCS_LIST:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_memory/, ${SRCS_MEMORY:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_stdio/, ${SRCS_STDIO:.c=.o})
OBJS_STD		+=	$(addprefix ${FOLDER_STD}ft_string/, ${SRCS_STRING:.c=.o})
OBJS_PRINTF		:=	$(addprefix ${FOLDER_PRINTF}, ${SRCS_PRINTF:.c=.o})
OBJS_GNL		:=	$(addprefix ${FOLDER_GNL}, ${SRCS_GNL:.c=.o})
OBJS			:=	${OBJS_STD} ${OBJS_PRINTF} ${OBJS_GNL}

# RULES
%.o:			%.c
	${CC} ${CFLAGS} -c -I./Includes $< -o ${<:.c=.o}
	@echo "Compilation of $<..."

$(NAME):		${OBJS}
	@ar -rcs $@ $^
	@echo "Library created !"

all:			${NAME}

libftstd:
	@make all -s FT=${FT_STD} OBJS=${OBJS_STD}

libftprintf:
	@make all -s FT=${FT_PRINTF} OBJS="${OBJS_STD} ${OBJS_PRINTF}"

libftgnl:
	@make all -s FT=${FT_GNL} OBJS="${OBJS_STD} ${OBJS_GNL}"

clean:
	@rm -f ${OBJS_STD} ${OBJS_PRINTF} ${OBJS_GNL}
	@echo "${PREFIX}${BLUE}Cleaning object files...${RESET}"

fclean:
	@rm -f ${NAME} ${NAME_STD} ${NAME_PRINTF} ${NAME_GNL}\
				${OBJS_STD} ${OBJS_PRINTF} ${OBJS_GNL}
	@echo "${PREFIX}${RED}Full clean.${RESET}"

re:				fclean all

.PHONY:			all clean fclean re libftstd libftprintf libftgnl
