##
## EPITECH PROJECT, 2019
## Personal Lib
## File description:
## my_printf.a
##

MY_PRINTF =	./flag_management.c \
			./my_printf.c \
			./functions/my_putchar_custom.c \
			./functions/my_putnbr_custom.c \
			./functions/my_putstr_custom.c

OBJ =	$(MY_PRINTF:.c=.o)

LIB_NAME =	libmy_printf.a

CFLAGS	=	-W -Wall -Wextra -Wextra
CFLAGS	+=	-I../../include/my_printf_h -I../../include/tools_h

LDFLAGS =	-L../../ -ltools

all: my_printf

my_printf: $(OBJ)
	ar rc $(LIB_NAME) $(OBJ)

clean:
	rm -f $(OBJ)

.PHONY: all clean

.SILENT: my_printf clean