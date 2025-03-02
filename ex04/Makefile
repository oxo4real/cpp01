# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 20:18:46 by aaghzal           #+#    #+#              #
#    Updated: 2025/03/01 20:45:12 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp
OBJS = ${addprefix $(BUILDIR),$(SRCS:.cpp=.o)}
BUILDIR = build/

all: $(BUILDIR) $(NAME)

$(BUILDIR):
	@mkdir -p $@

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

$(BUILDIR)%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(BUILDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
