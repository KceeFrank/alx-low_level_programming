#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
