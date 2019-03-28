##
## EPITECH PROJECT, 2018
## Personnal lib Makefile
## File description:
## Makefile for personnal libraries between "tools" "csfml" and "my_printf"
##

TOOLS =	source/lib_tools/char_analyser.c \
		source/lib_tools/error_output.c \
		source/lib_tools/is_alpha.c \
		source/lib_tools/my_get_nbr.c \
		source/lib_tools/my_nbr_isneg.c \
		source/lib_tools/my_putchar.c \
		source/lib_tools/my_putnbr.c \
		source/lib_tools/my_putstr.c \
		source/lib_tools/my_revstr.c \
		source/lib_tools/my_strcat.c \
		source/lib_tools/my_strcmp.c \
		source/lib_tools/my_strcpy.c \
		source/lib_tools/my_strncpy.c \
		source/lib_tools/my_strlen.c \
		source/lib_tools/my_swap.c \
		source/lib_tools/reset_index.c
		#source/lib_tools/my_str_to_word_array.c \#

CSFML =	source/lib_csfml/framebuffer_create.c \
		source/lib_csfml/hitbox.c

MY_PRINTF =	source/lib_printf/flag_management.c \
			source/lib_printf/my_printf.c \
			source/lib_printf/flags_functions/my_putchar_custom.c \
			source/lib_printf/flags_functions/my_putnbr_custom.c \
			source/lib_printf/flags_functions/my_putstr_custom.c

LINKED_LIST =	source/lib_linked_list/

#FS =	source/lib_file_system/file_systems.c

OBJ_TOOLS =	$(TOOLS:.c=.o)
OBJ_CSFML =	$(CSFML:.c=.o)
OBJ_PRINTF =	$(MY_PRINTF:.c=.o)
#OBJ +=	$(FS:.c=.o)

LIB_TOOL	=	libtool.a
LIB_CSFML	=	libcsfml.a
LIB_PRINTF	=	libprintf.a

CFLAGS	=	-W -Wall -Wextra -Wextra
CFLAGS	+=	-I./include -I./include/lib_csfml_h -I./include/lib_printf_h \
			-I./include/lib_tools_h -I./include/lib_linked_list_h

LDFLAGS =	-lcsfml-window -lcsfml-audio -lcsfml-system -lcsfml-graphics

all: # project building rule

full: tools csfml my_printf

tools: $(OBJ_TOOLS) 
	ar rc $(LIB_TOOL) $(OBJ_TOOLS)

csfml: $(OBJ_CSFML)
	ar rc $(LIB_CSFML) $(OBJ_CSFML)

my_printf: $(OBJ_PRINTF)
	ar rc $(LIB_PRINTF) $(OBJ_PRINTF)

clean:
	rm -rf $(OBJ_TOOLS)
	rm -rf $(OBJ_CSFML)
	rm -rf $(OBJ_PRINTF)
	rm -rf *~
	rm -rf *#*

fclean:	clean
	rm -f $(LIB_TOOL)
	rm -f $(LIB_CSFML)
	rm -f $(LIB_PRINTF)

re: fclean all

.PHONY: all tools csfml my_printf clean fclean re
