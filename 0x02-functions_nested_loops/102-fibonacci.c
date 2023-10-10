#include <stdio.h>

/**
 * main - block to execute
 * Desciption: computes and prints
 * Return: 0
 */

int main(void)

{

	int i = 0;

	long int num1 = 0, num2 = 1, n;



	while (i < 50)

	{

		n = num1 + num2;

		num1 = num2;

		num2 = n;

		printf("%lu", n);



		if (i < 49)

		{

			printf(", ");

		}

		i++;

	}

	putchar('\n');



	return (0);

}
