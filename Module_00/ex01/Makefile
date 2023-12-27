NAME = my_awesome_phonebook
SRC = phonebook.cpp
HEADERFILES = -I 
OBJFILES = $(SRC:.cpp=.o)
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
#

$(NAME): $(OBJFILES)
	@echo "\033[1;92mMaking $<...\033[0m"
	@$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)
	@echo "\033[5;95mMADE !\033[0m"

all: $(NAME)

%.o: %.cpp $(HEADERFILES)
	@echo "\033[1;92mCompiling $<...\033[0m"
	@$(CC) -c $(CFLAGS) -o $@ $< 

clean:
	@echo "\033[1;96mObject Files Cleaned\033[0m"
	@rm -f $(OBJFILES)

fclean:
	@echo "\033[1;96mCleaned All\033[0m"
	@rm -f $(NAME) $(OBJFILES)

re: fclean all
	
.PHONY: clean fclean all re