#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int w, x, y, z;

	for (w = 0; w < 10; w++)
	{
		for (x = 0; x < 10; x++)
		{
			y = (w * x) / 10;
			z = (w * x) % 10;

			if ((w * x) > 9)
				_putchar(y + '0');

			_putchar(z + '0');

			/* Dont print commas after the 10th column */
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			/* Add an extra space if printing single digits */
			if (x == 9 && w == 0)
				break;
			else if (w * (x + 1) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
