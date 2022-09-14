#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void)
{
	char u;

	for (u = 'a'; u <= 'z'; u++)
	{

		_putchar(u);

	}
	_putchar('\n');
	return (0);
}
