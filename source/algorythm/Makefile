##
## EPITECH PROJECT, 2019
## Personal lib
## File description:
## algo.a
##

ALGO =	source/algorythm/bubble_sort.c

OBJ =	$(ALGO:.c=.o)

LIB_NAME =	libalgo.a

CFLAGS =	-W -Wall -Wextra
CFLAGS +=	-I../../include/algo_h -I../../include/tools_h

LDFLAGS =	-L../../ -ltools

all: algo

algo: $(OBJ)
	ar rc $(LIB_NAME) $(OBJ)

clean:
	rm -f $(OBJ)

.PHONY: all clean

.SILENT: algo clean