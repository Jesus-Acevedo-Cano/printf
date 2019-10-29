#ifndef HOLBERTON
#define HOLBERTON

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int (*get_format(char in))(va_list);
int _putchar(char c);
int _putc(va_list c);
int _puts(va_list str);
int _putmod(void);
int _pow(int x, int y);
int _putint(va_list n);
int _printf(const char *format, ...);

/**
 * struct format - structure for functions in printf
 * @fmt: char pointer
 * @f: pointer to a function
 *
 * Description: printf structure
 */

typedef struct format
{
	char *fmt;
	int (*f)();
} fmt;

#endif
