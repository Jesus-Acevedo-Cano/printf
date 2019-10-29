#include "holberton.h"
int main(void)
{
	char *s;
	int test = 0;
	char car = 'f';
	s = "fucking";

	test = _printf("Hello");
	printf("\nLength: %d\n", test);
	test = printf("%d", 1234);
	printf("\nLength: %d\n", test);
	test = _printf("%");
	printf("\nLength: %d\n", test);
	test = _printf("%s", NULL);
	printf("\nLength: %d\n", test);
	test = _printf(NULL);
	printf("\nLength: %d\n", test);
	test = _printf("%yd");
	printf("\nLength: %d\n", test);
	return (0);
}
