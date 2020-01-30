# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rofernan <rofernan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/15 12:07:06 by rofernan          #+#    #+#              #
#    Updated: 2020/01/30 16:32:25 by rofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 				=	libasm.a

OBJS_PATH			=	./objs

LIBASM				=	ft_strlen.s	\
						ft_strcpy.s	\
						ft_strcmp.s

BONUS				=	

SRCS				=	$(LIBASM)
SRCS_BONUS			=	$(BONUS)

OBJS_NAME			=	$(SRCS:.s=.o)
OBJS_N_BONUS		=	$(SRCS_BONUS:.s=.o)

OBJS				=	$(addprefix $(OBJS_PATH)/, $(OBJS_NAME))
OBJS_BONUS			=	$(addprefix $(OBJS_PATH)/, $(OBJS_N_BONUS))

NASM				=	nasm
NASMFLAGS			=	-f macho64
CFLAGS				=	-Wall -Wextra -Werror

PROG				=	libasm

all:					$(NAME)

$(NAME):				$(OBJS)
						ar rc $(NAME) $(OBJS)
						ranlib $(NAME)
						@echo "\033[32m=== COMPILATION LIBASM OK ===\033[0m"

$(OBJS_PATH)/%.o:		./%.s
						@mkdir $(OBJS_PATH) 2> /dev/null || true
						@$(NASM) $(NASMFLAGS) -o $@ $<
						@echo "\033[33m$<\033[0m compilated	[${NAME}]"

main:					$(NAME)
						gcc $(CFLAGS) main.c $(NAME) -o $(PROG)

clean:
						rm -rf $(OBJS) $(OBJS_BONUS)
						@echo "\033[34m=== REPERTORY ./OBJS CLEANED ===\033[0m"

fclean:					clean
						rm -rf ./objs $(NAME) $(PROG)
						@echo "\033[34m=== REPERTORY LIBASM CLEANED ===\033[0m"

re:						fclean all main

.PHONY:					clean fclean re all bonus

.SILENT: