################################################################################
# COLORS                                                                       #
################################################################################

RES = \033[0m
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
LCYAN = \033[1;36m
CYAN = \033[1;34m
PURPLE = \033[0;35m

################################################################################
# INITIAL FORMAT OR COMPILATION                                                #
################################################################################

NAME		:= suchatroll.a
CC			= nasm
ASFLAGS		= -f macho64
SRCDIR		= src
OBJDIR		= obj
EXE			= troll
SRC			= $(wildcard $(SRCDIR)/*.s)
OBJ			= $(patsubst $(SRCDIR)/%.s, $(OBJDIR)/%.o, $(SRC))

#

################################################################################
# RULES                                                                        #
################################################################################

all: $(NAME)

test:
	gcc main.c $(NAME) -o $(EXE)

nasmins:
	brew install nasm

$(OBJ): $(OBJDIR)/%.o: $(SRCDIR)/%.s
		@mkdir -p $(OBJDIR)
		$(CC) $(ASFLAGS) -o $@ $<

$(NAME): $(OBJ)
	@ar rc $@ $^

clean:
	/bin/rm -f $(OBJSRC)
	/bin/rm -rf $(OBJDIR)

fclean: clean
	/bin/rm -f $(NAME)
	rm -rf ./$(EXE)
	@ echo "👺$(RED) ALL Binaries gone!$(RES) 👺"

re: fclean all
	@ echo "$(GREEN)♻️ Program remade completed ♻️$(RES)"

.PHONY: all clean fclean
