#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block to be executed
 * Description: computes and prints
 * Return: 0
 */

int main(void)
{
	int num = 0;
	int sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("%i\n", sum);
	return (0);
}
