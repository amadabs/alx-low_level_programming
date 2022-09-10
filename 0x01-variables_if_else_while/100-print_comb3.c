#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */

int main(void)
{
	int d, j;

	for (d = '0'; d <= '9'; d++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (d < j)
			{
				putchar(d);
				putchar(j);

				if (d != '8' || (d == '8' && j != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

return (0);
}
