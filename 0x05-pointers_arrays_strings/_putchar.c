#include <main.h>

/**
 * _putchar - this writes the character c to the stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and erro is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
