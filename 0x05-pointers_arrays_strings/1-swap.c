#include "main.h"
/**
 * swap_int - function swap
 * @a: parameta 1
 * @b: parameter2
 */
void swap_int(int *a, int *b)
{
	int c;


	c = *a;
	*a = *b;
	*b = c;
}
