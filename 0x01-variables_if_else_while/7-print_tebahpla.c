#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description:  prints the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	int alb;

	for (alb = 'z'; alb >= 'a'; alb--)
	{
		putchar(alb);
	}
	putchar('\n');

return (0);
}
