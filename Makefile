##
## Makefile
## File description:
## Building rules for all libraries
##

all: tools graphics my_printf
	@echo "Warning: All libraries were built !"

tools:
	@echo "Building tools.a ..."
	@make -s all -C ./source/tools/
	@mv ./source/tools/libtools.a ./

graphics:
	@echo "Building my_csfml.a ..."
	@make -s all -C ./source/graphical
	@mv ./source/graphical/libmy_csfml.a ./

my_printf:
	@echo "Building my_printf.a ..."
	@make -s all -C ./source/my_printf
	@mv ./source/my_printf/libmy_printf.a ./

linked_list:
	@echo "Building linked_list.a ..."
	@make -s all -C ./source/linked_list
	@mv ./source/linked_list/liblinked_list.a ./

clean:
	@echo "Cleaning all .o and unused files"
	@make clean -C ./source/graphical
	@make clean -C ./source/my_printf
	@make clean -C ./source/tools
	@make clean -C ./source/linked_list

fclean:	clean
	$(RM) ./libtools.a
	$(RM) ./libmy_csfml.a
	$(RM) ./libmy_printf.a
	$(RM) ./liblinked_list.a

re: fclean all clean
	@echo "All library rebuit"

.PHONY: all tools csfml my_printf clean fclean re