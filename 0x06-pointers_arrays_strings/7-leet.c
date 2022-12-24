#include "main.h"
/**
 * leet - encode a string into 1234
 * @x: the string to be encoded
 *
 * Return: string
 */
char *leet(char *x)
{
	int i = 0, j;
	char leet[a] = {'0', 'l', '?', 'E', 'A', '?', '?', 'T'};

	while (x[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (x[i] == leet[j] ||
			    x[i] - 32 == leet[j])
				x[i] = j + '0';
		}
		i++;
	}
	return (x)
}
