#include "holberton.h"
/**
 * _pow - Delivers the result of a number x to the power of y
 * @x: Base
 * @y: Exponent
 * Return: x to the power of y. If y is lower than 0, it returns -1.
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow(x, y - 1));
}

/**
 * _putint - Prints numbers
 * @n: Number (which is the next argument on the va_list)
 * Return: Amount of digits printed (including the minus sign if passed
 */
int _putint(va_list n)
{
	int i = 1;
	int d_count = 1;
	int num = va_arg(n, int);
	char out;

	if (num == 0)
	{
		_putchar('0');
		return (i);
	}
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		d_count++;
	}
	for (; num % _pow(10, i) != num; i++)
		d_count++;
	for (; i > 0; i--)
	{
		out = ((num % _pow(10, i)) / _pow(10, i - 1)) + '0';
		_putchar(out);
	}
	return (d_count);
}
