##
## EPITECH PROJECT, 2019
## Personal Lib
## File description:
## Linked_list library
##

LIST =	./create_list.c

OBJ =	$(LIST:.c=.o)

LIB_NAME =	liblinked_list.a

CFLAGS =	-W -Wall -Wextra
CFLAGS =	-I../../include/linked_list_h -I../../include/tools_h

LDFLAGS =	-L../../ -ltools

all: build

build: $(OBJ)
	ar rc $(LIB_NAME) $(OBJ)

clean:
	rm -f $(OBJ)

.PHONY: all clean

.SILENT: build clean