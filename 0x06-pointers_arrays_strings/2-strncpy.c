#include "main.h"
/**
 * _strncpy - copies at most an inputted number
 * of bytes from string src into dest
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strcpy(dest, src, n);
	return (dest);
}
