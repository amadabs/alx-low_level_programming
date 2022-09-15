#include "main.h"

/**
 * print_times_table - multipy table function
 * @n: number of times table
 */

void print_times_table(int n)
{
	int p;
	int q;
	int c;

	if (n <= 15 && n >= 0)
	{
		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				int c = q * p;

				if (q == 0)
				{
					_putchar('0');
				}else if (c <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (c / 100));
				}else if (c > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (c / 100));
					_putchar('0' + ((c / 10) % 10));
					_putchar('0' + (c % 10));
				}else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (c / 10));
					_putchar('0' + (c % 10));
				}
			}
			_putchar('\n');
		}
	}
}
