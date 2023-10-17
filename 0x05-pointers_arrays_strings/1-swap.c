#include "main.h"

/**
 *swap_int - swaps the values of two numbers through pointers
 *@a: int pointer
 *@b: int pointer
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
