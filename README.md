# Personal Library for C language

## Welcome !

As part of my IT studies, this is my personal libraries, built through my first year while learning the C language.
Theses libraries are used for specific projects while others are more generic and serve as tools.

> [!TIP] You're welcome to compare these lines of code with yours if you're (re)implementing similar functions or learning the C language.

> [!NOTE] Some libraries are incomplete or still in progress and they are therefore in an inconsistent state.
> Please avoid any production uses !

## How to use ?

At the root of this repository, you'll find a Makefile with severals targets that build specific or all libraires with the 
compiler gcc.

In the case you don't know what a Makefile is, please take a look at the official web site of `make` [here](https://www.gnu.org/software/make/manual/html_node/index.html).

Otherwise, you'll find the classic targets:
- `all` that build every libraries independently
- `clean`, `fclean` for cleaning temporary build files or everything
- And `re` for cleaning and remake everything.

Alternatively, use the libraries names (shown below) for building the one you want.

> [!TIP] `$ make [target_name]` or `$ make [library_name]`

### Before Starting !

The libraires built are **statical**. This means that you have to *link* them for you own compilation.
You will therefore need the folder **`/include`** in order to provide a reference for the functions you will use.

> [!WARNING] So don't forget to copy the header files you need and make/add the appropriate configuration to your compiler !

## Available Libraries

+ **my_printf.a** :

Reimplementation of the `printf()` function from the ***libC***.

+ **tools.a** :

Built through the projects, this one contains a bunch of "tool" functions.
Some are remakes of **libC functions**, others are **system calls** reimplementation, and finally there are created functions useful for various task such as an easier ***memory allocation***, ***data management***, etc...

+ **graphical.a** :

With the help of the external [***CSFML library***](https://www.sfml-dev.org/download/csfml/), this library was intented to contains useful functions for initialize ***windows***, make ***graphical elements***, setting-up ***events***, ***loops control*** and manage ***memory*** and ***performances***.

> [!NOTE] Still in progress !

> [!IMPORTANT] The *CSFML/SFML* **IS NOT** included in this library.
> This means that the *CSFML* have to be on your system. You may experience issues depending on where the CSFML is installed.
> The library relies on the usual locations and system inclusion.
> Also, this library requires **tools.a**.
> Please verify the paths used by the Makefile (at: `/source/graphical/Makefile`).

+ **linked_list.a** :

Mandatory for some projects, useful in every other case, building this one help us to understand linked list concept as well as memory access speed.
The goal was to create, manage and recover ressources more easily.

> [!NOTE] Still in progress !

+ **file_system.a** :

I wanted to make file management more easier for a lot of projects, including creating Command Line Interpreters.

+ **algo.a** :

I'm sorry, there almost nothing here. Basically, some algorythms for sorting, making things recursively are useful. I wanted to add "generical" functions for reproducing a ***"bubble_sort"*** algorythm like, a basic algorythm for sorting growing numbers.

## About Testing...

I learned the importance of testing and I think every line of code should be tested in order to predict every possible output.
**Unit** and **Functional** tests are great ways to ensure that functions do their jobs perfectly and prevent regressions and other unpleasant bugs.

Behind this interest and theses big principles, you may actually look where the tests are.
I planning to make more of them, add the whole folder to this repository in the future and ensure the best coverage.

If you're as interested as me about testing, I'm using the test framework [**Criterion**](https://github.com/Snaipe/Criterion) that I recommend you for learning Unit Testing !