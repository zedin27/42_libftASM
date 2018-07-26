NAME		= libft_s.a
CC			= nasm
ASFLAGS		= -f macho64
SRCDIR		= src/
OBJDIR		= obj/

SRC			=	\
				ft_hello.s \

OBJS		= $(patsubst $(SRCDIR)/%.s, $(OBJDIR)/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	$(ASFLAGS) $(NAME) $(OBJS)

$(OBJS): $(OBJDIR)/%.o: $(SRCDIR)/%.s
		$(CC) $(ASFLAGS) -o $@ $<
#%.o: $(addprefix $(SRCDIR)/, %.s)
#	$(CC) $(ASFLAGS) -o $< $@

$(NAME): $(OBJS)
	ar rc $@ $^

test:
	gcc -Wextra -Werror -Wall -o main.c $(NAME)

nasmins:
	brew install nasm

clean:
	/bin/rm -f src/*.o
	/bin/rm -f $(OBJSRC)

fclean: clean
	/bin/rm -f $(NAME)
	@ echo "👺$(RED) ALL Binaries gone!$(RES) 👺"

re: fclean all
	@ echo "$(GREEN)♻️ Program remade completed ♻️$(RES)"
