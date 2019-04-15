##
## EPITECH PROJECT, 2018
## Personnal lib Makefile
## File description:
## Makefile for personnal libraries
##

all: # project building rule
	@echo "If you seeing this, complete the 'all' rule and erase this message"

full: tools graphics my_printf
	@echo "Warning : All libraries were built !"

tools:
	@echo "Building tools.a ..."
	@make -s all -C ./source/tools/
	@mv ./source/tools/libtools.a ./

graphics:
	@echo "Building my_csfml.a ..."
	@make all -C ./source/graphical
	@mv ./source/graphical/libmy_csfml.a ./

my_printf:
	@echo "Building my_printf.a ..."
	@make all -C ./source/my_printf
	@mv ./source/my_printf/libmy_printf.a ./

clean:
	@echo "Cleaning all .o and unused files"
	@make clean -C ./source/graphical
	@make clean -C ./source/my_printf
	@make clean -C ./source/tools
	rm -f *~
	rm -f *#*

fclean:	clean
	rm -f ./libtools.a
	rm -f ./libmy_csfml.a
	rm -f ./libmy_printf.a

re: fclean all clean
	@echo "All library rebuit"

.PHONY: all tools csfml my_printf clean fclean re