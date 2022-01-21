# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhagon <juhagon@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 09:38:55 by juhagon           #+#    #+#              #
#    Updated: 2022/01/19 10:52:57 by juhagon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c movements/sa.c movements/sb.c movements/ss.c movements/pa.c movements/pb.c movements/ra.c movements/rb.c movements/rr.c movements/rra.c movements/rrb.c utils/utils.c sort_four.c sort_five.c sort_three.c sort_long.c utils/ft_split.c sort_strange_case.c free_stuff.c
OBJS = ${SRCS:.c=.o}
GCC   = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = push_swap
RM = rm -f

.c.o:
	${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	${GCC} $(OBJS) -o ${NAME}

all:	${NAME}
clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re: fclean all

.PHONY:		all clean fclean re
