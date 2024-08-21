# Table of Contents

- [Table of Contents](#table-of-contents)
	- [Description](#description)
	- [To Do](#to-do)
	- [Useful commands](#useful-commands)
	- [Documentation](#documentation)
	- [Test cases](#test-cases)

## Description
ft_printf is a project which is intended to recreate printf through the use of *variadic functions* in C.

## To Do
- [x] Modify [Makefile](Makefile) to use libft
- [ ] Update [headerfile](ft_printf.h) to include functions whenever appropriate
- [x] Write [function](ft_printf.c) which accesses variadic function when ft_printf() is called
- [ ] Implement the following conversions:
   - [x] %c single character
   - [x] %s string (as defined by common C convention)
   - [ ] %p void * pointer argument (in hexadecimal format)
   - [x] %d decimal (base 10) number
   - [x] %i integer in base 10
   - [x] %u unsigned decimal (base 10) number
   - [x] %x number in hexadecimal lowercase
   - [x] %X number in hexadecimal uppercase
   - [x] %% prints percent sign
 - [ ] Write unit tests:
   - [ ] Positive cases
   - [ ] Negative cases
   - [ ] Edge cases
 - [ ] Check for memory leaks using valgrind (requires main() in test.c)
	- Compile output file
		>> gcc -Wall -Werror -Wextra test.c -L. -lftprintf
	- Run valgrind on output for main function
		>> valgrind ./a.out
	- Run checks on memory leaks using valgrind if mem leaks happen
		>> valgrind --leak-checks=yes ./a.out

## Useful commands
	- Ensure that libftprintf.a has been archived
		>> make

	- To link .c file with library
		>> gcc test.c -L. -lftprintf

	- To link .c file with library in debug mode on Visual Studio code
    	-Ensure that test.c has main function before running
		>> Modify .vscode/tasks.json
		>> Modify "args" attribute:

		"args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}",
				"-L.",
				"-lftprintf"
            ],

		>> Run debugger

## Documentation

1. Format argument is reused whenever necessary to convert all given arguments.
   > printf %s a b

   > 'ab'

2. Missing arguments are treated as null strings or as zeros.
   - This depends on whether context expects string or a number
	> printf %sx%d

	> 'x0'

3. Additional escape '\c' results in no further output.
	> printf ("A%sC\cD%sF", B, E)

	> 'ABC'


## Test cases

1. Positive cases
   - %c single character
   - %s string (as defined by common C convention)
   - %p void * pointer argument (in hexadecimal format)
   - %d decimal (base 10) number
   - %i integer in base 10
   - %u unsigned decimal (base 10) number
   - %x number in hexadecimal lowercase
   - %X number in hexadecimal uppercase
   - %% prints percent sign

2. Negative cases
   - %c single character
   - %s string (as defined by common C convention)
   - %p void * pointer argument (in hexadecimal format)
   - %d decimal (base 10) number
   - %i integer in base 10
   - %u unsigned decimal (base 10) number
   - %x number in hexadecimal lowercase
   - %X number in hexadecimal uppercase
   - %% prints percent sign

3. Edge cases
   - Dealing with format specifiers out of scope within printf
   - Dealing with spaces in between % and format specifier
   - Printing words after format specifier
