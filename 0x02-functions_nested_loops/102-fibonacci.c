#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int m, n, o, pass;

	n = 1;

	o = 2;

	for (m = 1; m <= 50; ++m)
	{
		if (n != 20365011074)
		{
			printf("%ld, ", n);
		} else
		{
			printf("%ld\n", n);
		}
		pass = n + o;
		n = o;
		o = pass;
	}

	return (0);
}
