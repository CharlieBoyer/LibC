##
## EPITECH PROJECT, 2018
## Personnal lib Makefile
## File description:
## Makefile for personnal libraries between "tools" "csfml" and "my_printf"
##

ALGO =	source/algorythm/bubble_sort.c

FS =	source/file_system/file_systems.c

GRAPHICS =	source/graphical/framebuffer_create.c \
			source/graphical/hitbox.c

LINKED_LIST =	source/linked_list/create_list.c

MY_PRINTF =	source/my_printf/flag_management.c \
			source/my_printf/my_printf.c \
			source/my_printf/functions/my_putchar_custom.c \
			source/my_printf/functions/my_putnbr_custom.c \
			source/my_printf/functions/my_putstr_custom.c

TOOLS =	source/tools/char_analyser.c \
		source/tools/error_output.c \
		source/tools/is_alpha.c \
		source/tools/my_get_nbr.c \
		source/tools/my_nbr_isneg.c \
		source/tools/my_putchar.c \
		source/tools/my_putnbr.c \
		source/tools/my_putstr.c \
		source/tools/my_revstr.c \
		source/tools/my_strcat.c \
		source/tools/my_strcmp.c \
		source/tools/my_strcpy.c \
		source/tools/my_strncpy.c \
		source/tools/my_strlen.c \
		source/tools/my_swap.c \
		source/tools/reset_index.c
		#source/lib_tools/my_str_to_word_array.c \#

#OBJ +=	$(ALGO:.c=.o)
#OBJ +=	$(FS:.c=.o)
OBJ_GRAPHICS =	$(GRAPHICS:.c=.o)
#OBJ +=	$(LINKED_LIST:.c=.o)
OBJ_MY_PRINTF =	$(MY_PRINTF:.c=.o)
OBJ_TOOLS =	$(TOOLS:.c=.o)

#LIB_ALGO =	libalgo.a
#LIB_FS	=	libfile_sys.a
LIB_GRAPHICS =	libmy_csfml.a
#LIB_LINKED_LIST =	libeasy_linked_list.a
LIB_PRINTF =	libmy_printf.a
LIB_TOOL =	libtools.a

CFLAGS	=	-W -Wall -Wextra -Wextra
CFLAGS	+=	-I./include/algo_h -I./include/graphical_h \
			-I./include/my_printf_h -I./include/tools_h \
			-I./include/linked_list_h

LDFLAGS =	-lcsfml-window -lcsfml-audio -lcsfml-system -lcsfml-graphics

all: # project building rule
	echo "Please use lib specific rules or 'make full' for build all available lib"

full: tools graphics my_printf

tools: $(OBJ_TOOLS)
	ar rc $(LIB_TOOL) $(OBJ_TOOLS)

graphics: $(OBJ_GRAPHICS)
	ar rc $(LIB_GRAPHICS) $(OBJ_GRAPHICS)

my_printf: $(OBJ_MY_PRINTF)
	ar rc $(LIB_PRINTF) $(OBJ_MY_PRINTF)

clean:
	#rm -f $(OBJ_ALGO)
	#rm -f $(OBJ_FS)
	rm -f $(OBJ_GRAPHICS)
	#rm -f $(OBJ_LINKED_LIST)
	rm -f $(OBJ_PRINTF)
	rm -f $(OBJ_TOOLS)
	rm -f *~
	rm -f *#*

fclean:	clean
	#rm -f $(LIB_ALGO)
	#rm -f $(LIB_FS)
	rm -f $(LIB_GRAPHICS)
	#rm -f $(LIB_LINKED_LIST)
	rm -f $(LIB_PRINTF)
	rm -f $(LIB_TOOL)

re: fclean all clean

.PHONY: all tools csfml my_printf clean fclean re

.SILENT: clean fclean