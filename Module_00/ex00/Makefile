NAME = megaphone
SRC = megaphone.cpp
#HEADERFILES = -I 
OBJFILES = $(SRC:.c=.o)
CFLAGS = -Wall -Wextra -Werror -g3 -std=c++98
CC = c++
# 
$(NAME): $(OBJFILES)
	$(CC) $(CFLAGS) $(OBJFILES) -o $(NAME)

all: $(NAME)

%.o: %.c $(HEADERFILES)
	$(CC) -c $(CFLAGS) -o $@ $< 

clean:
	rm -f $(OBJFILES)

fclean:
	rm -f $(NAME) $(OBJFILES)

re: fclean all
	
.PHONY: clean fclean all re