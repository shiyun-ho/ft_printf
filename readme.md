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
   - [ ] %s string (as defined by common C convention)
   - [ ] %p void * pointer argument (in hexadecimal format)
   - [ ] %d decimal (base 10) number
   - [ ] %i integer in base 10
   - [ ] %u unsigned decimal (base 10) number
   - [ ] %x number in hexadecimal lowercase
   - [ ] %X number in hexadecimal uppercase
   - [ ] %% prints percent sign
 - [ ] Write unit tests:
   - [ ] Positive cases
   - [ ] Negative cases
   - [ ] Edge cases
 - [ ] Check for memory leaks using valgrind (requires main() in test.c)

## Useful commands
	- Ensure that libftprintf.a has been archived
		>> make

	- To link .c file with library
		>> gcc test.c -L. -lftprintf

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
