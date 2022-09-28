#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int p, q, r, flag;

	r = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		flag = 0;
		for (q = 0; accept[q] != '\0'; q++)
		{
			if (s[p] == accept[q])
			{
				r++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (r);
		}
	}

	return (0);
}
