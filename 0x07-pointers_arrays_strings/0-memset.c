#include "main.h"

/**
 * *_memset - fill memory
 * @s: memory to be filled
 * @b: char to copy
 * @n: n of times to copy b
 *
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
