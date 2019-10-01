# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojoubout <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 21:50:04 by ojoubout          #+#    #+#              #
#    Updated: 2019/07/22 21:50:05 by ojoubout         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	@gcc -c srcs/ft*.c -Iincludes/
	@ar rc libft.a *.o
	@ranlib libft.a

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf libft.a

re: fclean all