#include "main.h"

/**
 * print_times_table - times table function
 * @n: integer to return
 */

void print_times_table(int n)
{
	int p;
	int q;

	if (n <= 15 && n >= 0)
	{
		for (p = 0; p <= n; p++)
		{
			for (q = 0; q <= n; q++)
			{
				int prod = q * p;

				if (q == 0)
				{
					_putchar('0');
				}else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 100));
				}else if (prod > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (prod / 100));
					_putchar('0' + ((prod / 10) % 10));
					_putchar('0' + (prod % 10));
				}else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
