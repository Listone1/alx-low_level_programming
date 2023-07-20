#include "main.h"

/**
 * print_line - Draws a straight line with characters '_' in the terminal.
 * @n: The number of times character '_' should be printed
 *       If n is 0 or less, the function only prints
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	while (n > 0)
	{
	_putchar('_');
	n--;
	}

	_putchar('\n');
}
