
# HOW TO USE GDB

## BEFORE Starting

Always add the ***-ggdb*** flag to compile programs with debugging
informations needed by gdb. \
(note : gcc support -0 and -g flag in same time)

## Start GDB

    $> gdb **/my_program                |
    GNU gdb (GDB) Fedora 8.2-6.fc29     | Beggining of GDB starting header
    Copyright (C) 2018 Free Soft...     | ...
    ...                                 | ...
    (gdb)                               | GDB prompt looks like this and wait for a command

> Note : If your console is too small, maybe you will need to hit the return key multiple times before seeing GDB's prompt.

### Basic Commands

+ **(gdb) $>** -eval-command *command*

> example : **(gdb) $>** -eval-command *break 34* | **(gdb) $>** -ex *break 34* -ex *run*

Called **-ex _command_** too, **-eval-command** execute a single GDB "command" and need sometimes to be repeated to make the expected result. \
This syntax is used by VS Code built-in debug console too

+ **(gdb) $>** run *arguments*

Run the debugger session with the binary loaded with or without "*arguments*"

+ **(gdb) $>** break *location*

> exemple : **(gdb) $>** break *main.c:20*

Add a breakpoint at the function, "*location*" allow to specify a file's line.
Be careful to the format ***file:line***

+ **(gdb) $>** info break

Allow us to see breakpoints informations such as their number in the list,
their status, etc...

+ **(gdb) $>** disable *breakpoints*

Only disable one or various breakpoints, allowing you to enable them later \
(If none are specified, disable all breakpoints)

+ **(gdb) $>** enable *breakpoints* [***once***|***count***|***delete***]

This command enable one or various breakpoints again, "***once***" key-word enable
specified breakpoint once and disable it after, "***delete***" enable the breakpoint
once before delete it and "***count***" disable the breakpoint after being triggered

+ **(gdb) $>** delete *location*

Works like **break** but remove, if no arguments are specified, all breakpoints setted after prompted. \
Otherwise, you can specify the breakpoint location (like break -> ***file:line***).

+ **(gdb) $>** clear

**clear** is an alternative to delete, where it delete the next breakpoint
encounter, always by stopping the actual process and returning the control to GDB

+ **(gdb) $>** step | stepi

**step** resume a running program until control reaches a different line, then stop 
again, it allows to check every single line of your code if the program is stopped at a breakpoint.\
The **stepi** variant allow to step without debugging informations ("***ggdb***" flag) but it is far less efficient and special control command such as **print** will not work.

+ **(gdb) $>** backtrace *options*

> exemples : **(gdb) $>** backtrace *full* | backtrace *3*

This command is used when a program under gdb control reaches his end. At that
moment, **backtrace** make a summary what happened in the program so far \
Without arguments, **backtrace** print all frames of the stack, i.e. the command print
informations such as arguments given, local variables values, associated to one
function called in the call stack.

Command *options* are :

  > + **n** says to backtrace to print the "n" latest frames (the innermost frames)
  > + **-n** shows the first frames by starting from the main (the outermost frame)
  > + **full** print all local variable values

+ **(gdb) $>** frame [*level*] *level_number* :

Select a frame at current *level_number*, the "level" is the position of the
frame in the stack. So the frame (level) 1 is the frame on the latest function
called, the maximum level is normaly the outermost frame level, main function
by default. the "***level***" keyword is not mandatory.

+ **(gdb) $>** info frame *frame_selection_specs*

Show informations about the frame specified in the field *"frame_selection_specs"*
which contains himself the same thing as frame command, i.e. the frame level

+ **(gdb) $>** info args [*-q*] | **(gdb) $>** info local [*-q*]

Show informations about arguments given to the function in the selected frame
in the case of ***info args***. \
Otherwise, in the case of ***info local***, print the local variables values, each on a separated line. \

The [*-q*] option stand for "quiet" and not print header which inform why no args 
or variable are print

+ **(gdb) $>** list *linenum* | list *function*

Print source code around specified ***linenum*** or print function in the case of ***list function***

+ **(gdb) $>** print *expr*

> Exemple : **(gdb) $>** print *loop_counter* | **(gdb) $>** print $3
>> Here "*loop_counter*" is a variable, the control is stopped on the line where *loop_counter* is declared. \
> $3 is the rank in the value history", namely, the ***third*** value already printed.

Call ***inspect*** too and uselful between each **step(i)**, **print** evaluate the expression "***expr***" such as a variable, for example, and print it. \
To print local variables, the running program must be in the function where the
local variable is set, i.e the control must be stopped on the variable definition line or after, **ALWAYS** inside the function.

Without "***expr***" the command print the latest value stored in the value history. \
Indeed, each command **print** save the value printed in a value history under
the form of successive integers, starting by one, by which we can use for
reference. \
(As you can see in the exemple : ***$num*** is the reference in the history, **print** show the value associated)

+ **(gdb) $>** ptype *expr*

If you are interested in informations about types, or about how the fields of a
struct or a class are declared, use the **ptype** command rather than **print**

+ **(gdb) $>** explore *args*

> Exemple : **(gdb) $>** explore *my_class* | Here "my_class" is a structure already passed by the control thanks to **step**

**explore** is useful when we dealing with structures, and allow you to litteraly
"explore" levels or fields of a struct (or class) in "*args*" whatsoever it is an expression in source code or a type visible in the debugging.

Let's "explore" *my_class* like the exemple. \
We admitting such a struct exist in our code, we will be prompt to select the field to explore, like this :

    my_class.name = <select 0 to explore this field of type char*>
    my_class.info = <select 1 to explore this field of type struct my_2nd_class>
and so one... hiting the return key without a field goes back up us to the highier level of the data structure.

+ **(gdb) $>** display *expr* | **(gdb) $>** info display | **(gdb) $>** [***delete***|***disable***|***enable***] display *dnum*

> Exemple : **(gdb) $>** delete display *2* | **(gdb) $>** display "*breakpoint reached \n*"

Add specified expression "***expr***" to the auto-display list. \
Like that, each time GDB recover control, i.e each time the program stop (**step(i)** or **breakpoints**), GDB display the value of each "***expr***" stored in the auto-display list. \
In the list, the reference to the each "***expr***" is a integer in another history. References here are called "*dnum*". \
When **info** is added, show the auto-display list expressions and associated "*dnum*".

The diferent options works like those for **break** :

> + **disable** : temporaly disable the "*dnum*" auto-display list field until re-enabled
> + **enable** : enable the corresponding "*dnum*" field of the auto-display list
> + **delete** : delete an entry in the auto-display list, always specified with "*dnum*"
