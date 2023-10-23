#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - entry point
 *@a: input 1
 *@size: input 2
 *Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int summ1, summ2, x;

	summ1 = 0;
	summ2 = 0;

	for (x = 0; x < size; x++)
	{
		summ1 += a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		summ2 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", summ1, summ2);
}
