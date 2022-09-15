#include <stdio.h>

/**
 * main - computes and prints the sum total of all multiples of 3 or below 1024
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int sum3, sum5, sum;
	int k;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (k = 0; k < 1024; ++k)
	{
		if ((k % 3) == 0)
		{
			sum3 = sum3 + k;
		} else if ((k % 5) == 0)
		{
			sum5 = sum5 + k;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
