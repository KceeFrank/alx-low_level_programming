#include "main.h"
/**
 * _strcmp - compares pointers to strings
 * @s1: input value
 * @s2: input value
 *
 * Return: if str1 < str2, the negative of the unmatched char
 *         if str1 == str2, 0,
 *         if str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
