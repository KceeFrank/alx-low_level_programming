#include "main.h"
/**
 * swap_int - swap a and b
 * @a: firt int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
