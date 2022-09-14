#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void)
{
	char u;
	char v;

	for (v = 0; v <= 9; v++)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);

		}
		_putchar('\n);

	}

}

