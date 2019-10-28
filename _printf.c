#include "holberton.h"

/**
 * get_format - Get the adecuate input format
 * @in: Input format
 * Return: Pointer to function
 */
int (*get_format(char in))(va_list)
{
	fmt fmts[] = {
		{"c", _putc},
		{"s", _puts},
		{NULL, _putmod},
	};
	int i;

	i = 0;
	while (i < 2)
	{
		if(in == fmts[i].fmt[0])
			return (fmts[i].f);
		i++;
	}
	return (fmts[i].f);
}


/**
 * _printf - Prints a string according to specified formats
 * @format: String to print AND different formated inputs
 * Return: Amount of characters printed (NULL char not included)
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int c_count = 0;
	int (*fmt)(va_list);
	va_list args;

	if (format && format[i] != '\0')
	{
		va_start(args, format);
		for (i = 0; *(format + i) != '\0'; i++)
		{
			if (*(format + i) == '%')
			{
				fmt = get_format(format[i + 1]);
				c_count = fmt(args);
				i++;
			}
			else
			{
				_putchar(*(format + i));
				c_count++;
			}
		}
		va_end(args);
	}
	return (c_count);
}
