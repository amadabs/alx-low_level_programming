#include <stdio.h>

/**
 * main - prints sum of even valued term
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int v;
	unsigned long int p, q, pass, sum;

	p = 1;
	q = 2;
	sum = 0;

	for (v = 1; v <= 33; ++v)
	{
		if (p < 4000000 && (p % 2) == 0)
		{
			sum = sum + p;
		}
		pass = p + q;
		p = q;
		q = pass;
	}

	printf("%lu\n", sum);

	return (0);
}
