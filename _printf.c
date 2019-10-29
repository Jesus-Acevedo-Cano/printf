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
		{"%", _putmod},
		{"d", _putint},
		{"i", _putint},
		{NULL, NULL}
	};
	int i;

	if (in == '\0')
		return (NULL);
	i = 0;
	while (i < 5)
	{
		if (in == fmts[i].fmt[0])
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
	int c_count = -1;
	int (*fmt)(va_list);
	va_list args;

	if (format && format[i] != '\0')
	{
		c_count = 0;
		va_start(args, format);
		for (i = 0; *(format + i) != '\0'; i++)
		{
			if (*(format + i) == '%')
			{
				if (format[i + 1] == '\0')
				{
					c_count = -1;
					break;
				}
				fmt = get_format(format[i + 1]);
				if (fmt == NULL)
				{
					c_count += _putchar('%');
					c_count += _putchar(format[i + 1]);
				}
				else
				{
					c_count += fmt(args);
				}
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
