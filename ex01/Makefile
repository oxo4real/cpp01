# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaghzal <aaghzal@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/01 20:18:46 by aaghzal           #+#    #+#              #
#    Updated: 2025/03/01 20:18:47 by aaghzal          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BraiiiiiiinnnzzzZ

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp zombieHorde.cpp Zombie.cpp
OBJS = ${addprefix $(BUILDIR),$(SRCS:.cpp=.o)}
BUILDIR = build/

all: $(BUILDIR) $(NAME)

$(BUILDIR):
	@mkdir -p $@

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $^ -o $@

$(BUILDIR)%.o: %.cpp Zombie.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(BUILDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
