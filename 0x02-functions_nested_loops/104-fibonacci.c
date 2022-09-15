#include <stdio.h>

/**
 * main - finds and prints the first 98 fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int i, p, q, p1, p2, q1, q2;

	p = 1;
	q = 2;

	printf("%lu", p);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", p)
		q = q + p;
		p = q - p;
	}

	p1 = p / 1000000000;
	p2 = p % 1000000000;
	q1 = q / 1000000000;
	q2 = q % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", q1 + (q2 / 1000000000));
		printf("%lu", q2 % 1000000000);
		q1 = q1 + p1;
		p1 = q1 - p1;
		q2 = q2 + p2;
		p2 = q2 - p2;
	}

	printf("\n");

	return (0);
}
