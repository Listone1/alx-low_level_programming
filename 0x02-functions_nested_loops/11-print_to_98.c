#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98, followed by a new line.
 * @n: The starting number.
 *
 * Description: This function prints all natural numbers from the given starting
 * number `n` up to 98, separated by a comma and a space. The numbers are printed
 * in ascending order if `n` is less than or equal to 98, and in descending order
 * if `n` is greater than 98.
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            printf("%d", i);
            if (i != 98)
                printf(", ");
        }
    }
    printf("\n");
}

