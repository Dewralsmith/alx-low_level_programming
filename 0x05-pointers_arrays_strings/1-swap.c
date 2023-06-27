# include <stdio.h>

/**
 * swap_int - Swap the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer tobbe swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the that swap the function of two integer. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
