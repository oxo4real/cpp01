NAME = BraiiiiiiinnnzzzZ

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
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
