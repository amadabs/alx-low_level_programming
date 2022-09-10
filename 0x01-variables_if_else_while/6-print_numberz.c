#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description:  prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int bs;

	for (bs = 0; bs < 10; bs++)
	{
		putchar(bs + '0');
	}
	putchar('\n');

return (0);
}
