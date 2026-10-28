NAME        := libnm.a

CC          := cc
CFLAGS      := -Wall -Wextra -Werror -g
AR          := ar rcs
RM          := rm -f
RMDIR       := rm -rf
MKDIR       := mkdir -p
VPATH       = ./lib

OBJDIR      := .build


SRC         := nm_atoi.c \
				nm_bzero.c \
				nm_calloc.c \
				nm_isalnum.c \
				nm_isalpha.c \
				nm_isascii.c \
				nm_isdigit.c \
				nm_isprint.c \
				nm_itoa.c \
				nm_memchr.c \
				nm_memcmp.c \
				nm_memcpy.c \
				nm_memmove.c \
				nm_memset.c \
				nm_strchr.c \
				nm_strdup.c \
				nm_strlcat.c \
				nm_strlcpy.c \
				nm_strlen.c \
				nm_strncmp.c \
				nm_strnstr.c \
				nm_strrchr.c \
				nm_tolower.c \
				nm_toupper.c \
				nm_putchar_fd.c \
				nm_putendl_fd.c \
				nm_putnbr_fd.c \
				nm_putstr_fd.c \
				nm_substr.c \
				nm_split.c \
				nm_strtrim.c \
				nm_striteri.c \
				nm_strjoin.c \
				nm_strmapi.c \
				nm_lstadd_back.c \
				nm_lstadd_front.c \
				nm_lstclear.c \
				nm_lstdelone.c \
				nm_lstiter.c \
				nm_lstlast.c \
				nm_lstmap.c \
				nm_lstnew.c \
				nm_lstsize.c \
				nm_strspn.c \
				nm_strstr.c \
				nm_strcspn.c \
				nm_lstfind.c \
				nm_lstinsert_after.c \
				nm_dlstadd_back.c \
				nm_dlstadd_front.c \
				nm_dlstclear.c \
				nm_dlstdel_first.c \
				nm_dlstdelone.c \
				nm_dlstfirst.c \
				nm_dlstiter.c \
				nm_dlstlast.c \
				nm_dlstnew.c \


OBJ         := $(patsubst %.c,$(OBJDIR)/%.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	$(MKDIR) $(OBJDIR)

clean:
	$(RMDIR) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
