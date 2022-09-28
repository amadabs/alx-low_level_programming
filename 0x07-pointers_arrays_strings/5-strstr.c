#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the begining of the located substring or null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int p, c;

	for (p = 0; haystack[p] != '\0'; p++)
	{
		for (c = 0; needle[c] != '\0'; c++)
		{
			if (haystack[p + c] != needle[c])
				break;
		}
		if (!needle[c])
			return (&haystack[p]);
	}
	return (NULL);
}
