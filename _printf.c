#include "holberton.h"
/**
 * get_format - Get the adecuate input format
 * @in: Input format
 * Return: Pointer to function
 */
int (*get_format(char *in))(va_list)
{
	int i;
	fmt fmts[] = {
		{"c", _putc},
		{"s", _puts},
		{NULL, _putmod}
	}

	i = 0;
	while (i < 2)
	{
		if(strcmp(in, fmts[i] == 0))
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
	unsigned int i;
	int c_count;
	va_list args;

	c_count = 0;
	if (format && format[i] != NULL)
	{
		va_start(args, format);
		for (i = 0; *(format + i) != '\0'; i++)
		{
			if (*(format + i) == '%')
			{
				c_count = get_format(args);
				i++;
			}
			else
			{
				_putc(*(format + i));
				c_count++;
			}
		}
		va_end(args);
		_putc('\n');
	}
	return (c_count);
}
