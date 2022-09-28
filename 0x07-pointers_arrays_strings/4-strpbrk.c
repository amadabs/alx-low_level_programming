#include "main.h"
#include <stdio>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int p, q;

	for (p = 0; *s != '\0'; p++)
	{
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (*s == accept[q])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
				
