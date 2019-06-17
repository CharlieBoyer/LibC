##
## EPITECH PROJECT, 2019
## Personal Lib
## File description:
## graphics lib --> my_csfml.a
##

RM = rm -f

MY_CSFML =	./my_csfml/framebuffer_create.c \
			./my_csfml/hitbox.c

OBJ =	$(MY_CSFML:.c=.o)

LIB_NAME =	libmy_csfml.a

CFLAGS =	-W -Wall -Wextra
CFLAGS =	-I../../include/graphical_h -I../../include/tools_h

LDFLAGS =	-lcsfml-window -lcsfml-audio -lcsfml-system -lcsfml-graphics
LDFLAGS +=	-L../../ -ltools

all: my_csfml

my_csfml: $(OBJ)
	ar rc $(LIB_NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

.PHONY: all clean

.SILENT: my_csfml clean