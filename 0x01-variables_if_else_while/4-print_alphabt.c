#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabet with new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
		{
			putchar(al);
		}
		else
		{
		}
	}
	putchar('\n');

return (0);
}
