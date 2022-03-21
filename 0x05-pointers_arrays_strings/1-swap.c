#include "main.h"

/**
* swap_int -a function that swaps the values of 2 integers
* @a: value to be swapped
* @b: value to be swapped
* Return: (0)
*/

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
