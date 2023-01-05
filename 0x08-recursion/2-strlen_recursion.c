/*
 * File: 2-strlen_recursion.c
 * author: kaziro
 */

#include "main.h"

/**
 * _strlen_recursion - Return the lemgth of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
