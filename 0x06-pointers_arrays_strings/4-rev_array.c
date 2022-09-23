#include "main.h"

 /**
  * reverse_array - reverse an array of integers
  * @a: array to be reversed
  * @n: number of elements in the array
  */
void reverse_array(int *a, int n)
{
	int p, q, tmp;

	q = n - 1;

	for (p = 0; p < n / 2; p++)
	{
		tmp = a[p];
		a[p] = a[q];
		a[q--] = tmp;
	}
}
