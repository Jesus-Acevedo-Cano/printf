#include "holberton.h"
/**
 * _putc - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * _putc - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putc(va_list c)
{
	_putchar(va_arg(c, int));
	return (1);
}

/**
 * _puts - function to print an array char by char
 * @str: for characters
 * Return: Always 0 (Success)
 */

int _puts(va_list str)
{
	int i;
	char *out;

	out = va_arg(str, char *);
	i = 0;
	while (*(out + i))
	{
		_putchar(out[i]);
		i++;
	}
	return (i);
}

/**
 * _putmod - Places a percentage symbol
 * Return: Nothing
 *
 */

int _putmod()
{
	_putchar('%');
	return (1);
}
