# DEVELOPMENT OF FUNCTION _printf #
===================================

This is a kind of function like the printf in a version adapted to Holberton School's exercise that represent only a part of the powerful printf function. The function _printf produce output according to a format: Write output to stdout, the standard output stream. The function write the output under the control of a format  string  that  specifies  how  subsequent arguments.

## FUNCTIONS ##
---------------

### int (*get_format(char in))(va_list); ###

Function to knows the format of the specifier (c, s, i, d) that we are receiving.

### int _putchar(char c); ###

This is the main function to print character by character.

### int _putc(va_list c); ###

Fuction given in our _printf to print characters using the specifier c.

### int _puts(va_list str); ###

Function given in our _printf to print a string using the specifier s.

### int _putmod(void); ###

Function given by default to print a module sign if the condition are true.

### int _putint(va_list n); ###

Function inside _printf to print integers using the specifiers i or d.

## AUTORS ##
-------------

Jaime Andrés Gálvez Villamarin, Jesus Evelio Acevedo Cano, Paula Sotelo.