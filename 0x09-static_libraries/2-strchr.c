#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character
 * @s: string
 * @c: char to search for
 *
 * Return: a pointer to the character
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
