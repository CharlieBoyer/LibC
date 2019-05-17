##
## EPITECH PROJECT, 2019
## my_printf build
## File description:
## Global Makefile
##

SRC =	my_printf.c \
		flag_management.c \
		functions/binary_conversion.c \
		functions/my_put_int_var.c \
		functions/my_put_long_var.c \
		functions/my_put_uint_var.c \
		functions/my_putchar_var.c \
		functions/my_putstr_var.c \
		functions/octal_conversion.c

OBJ =	$(SRC:.c=.o)

BIN =	libmy_printf.a

CFLAGS =	-O0 -W -Wall -Wextra -I../../include/tools_h -I../../include/my_printf_h

LDFLAGS =	-L../../ -ltools

all: $(BIN)

$(BIN): $(OBJ)
	ar rc $(BIN) $(OBJ)

clean:
	rm -f $(OBJ)

.PHONY: all clean

.SILENT: my_printf clean