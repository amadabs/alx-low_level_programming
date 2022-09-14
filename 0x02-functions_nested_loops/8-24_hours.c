#include "main.h"

/**
 * jack_bauer - main 
 */

void jack_bauer(void)
{
	int v;
	int u;

	for (v = 0; v <= 23; v++)
	{
		for (u = 0; u <= 59; u++)
		{
			_putchar(v / 10 + '0');
			_putchar(v % 10 + '0');
			_putchar(':');
			_putchar(u / 10 + '0');
			_putchar(u % 10 + '0');
			_putchar('\n');
		}
	}

}
