#include "main.h"
/**
 * _puts - print function that prints a string, followed by a new line
 *@str: the string
 * Return: length of the string;
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
