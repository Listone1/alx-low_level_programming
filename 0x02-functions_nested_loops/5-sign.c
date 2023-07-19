#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 for positive num, -1 for negative num, or zero for anything else
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43); /* Print '+' for positive numbers */
return (1);
}
else if (n < 0)
{
_putchar(45); /* Print '-' for negative numbers */
return (-1);
}
else
{
_putchar(48); /* Print '0' for zero return (0) */
return (0);
}
}
