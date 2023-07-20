#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 * The function prints the multiplication table of the numbers from 0 to 9.
 * It prints the result in the following format:
 *   0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 *   0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *   0, 2, 4, 6, 8, 10, 12, 14, 16, 18
 *   ...
 *   ...
 *   0, 9, 18, 27, 36, 45, 54, 63, 72, 81
 */
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (result < 10)
{
if (j != 0)
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}

if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
