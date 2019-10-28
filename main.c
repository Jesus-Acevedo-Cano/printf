#include "holberton.h"
int main(void)
{
	char *s;
	s = "fucking";

	_printf("Hello%sWorld\n", " ");
	_printf("%z\n");
	_printf("Hello %s %z World\n", s);
	_printf("Hello %z %s World\n", s);
	_printf("Hello %% %s World\n", s);
	_printf(NULL);
	_printf("%s\n", NULL);
	_printf("%");
	return (0);
}
