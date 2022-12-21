#include "main.h"
/**
 * _strlen - return the legenth of the string
 * @s: char to check
 * Return: 0;
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
