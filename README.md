# Libasm
## Summary
The aim of this project is to get familiar with assembly language.
## Summary
The following functions must be rewritten in assembly language:
* ft_strlen (man 3 strlen)
* ft_strcpy (man 3 strcpy)
* ft_strcmp (man 3 strcmp)
* ft_write (man 2 write)
* ft_read (man 2 read)
* ft_strdup (man 3 strdup, call to malloc allowed)
## Instructions
* the code must be written in 64 bits ASM, beware of the calling convention
* the files must be named "*.s", inline ASM not allowed
* the code must be compiled with nasm
* the code must be written with the Intel syntax, not the AT&T
* the library must be named libasm.a
## Compilation
Use rules ```make``` and ```make main``` to respectively create the library libasm.a and to compile with the main.c file.
To create an executable:
```
gcc -Wall -Wextra -Werror -L. -lasm main.c
```
## Execution
```
./libasm [arg1] [arg2] ...
```
Follow the instructions when executing the program.
