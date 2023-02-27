#include "main.h"

/**
 * swap-int - swap the values of two intergers
 * @a: first number
 * @b: second number
 *
 * Return nothing on sucess
 */

void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
