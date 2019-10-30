#include "holberton.h"
/**
 * _putint - Prints numbers
 * @n: Number (which is the next argument on the va_list)
 * Return: Amount of digits printed (including the minus sign if passed
 */
int _putint(va_list n)
{
	long int i, d_count = 0, m1, m2;
	int num = va_arg(n, int);
	unsigned long int pow;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		m1 = num;
		m1 *= -1;
	}
	else
	{
		m1 = num;
	}
	m2 = m1;
	pow = 1;
	for (i = 0; m1 != 0; i++)
	{
		m1 = m1 / 10;
		pow = pow * 10;
	}
	pow /= 10;
	d_count = i;
	while (i != 0)
	{
		_putchar((m2 / pow) + '0');
		m2 = m2 % pow;
		i--;
		pow = pow / 10;
	}
	if (num < 0)
		d_count++;
	return (d_count);
}
