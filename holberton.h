#ifndef HOLBERTON
#define HOLBERTON

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _putchar(char c);
int _putc(va_list c);
int _puts(va_list str);
int _putmod();
int _printf(const char *format, ...);

typedef struct format
{
	char *fmt;
	int (*f)();
} fmt;

#endif
