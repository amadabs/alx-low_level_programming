#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints base 16 numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	char bs;
	char cd = '0';

	while (cd <= '9')
	{
		putchar(cd);
		cd++;
	}
	for (bs = 'a'; bs <= 'f'; bs++)
	{
		putchar(bs);
	}
	putchar('\n');

return (0);
}
