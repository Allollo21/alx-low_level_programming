#include <stdio.h>

/**
 * main - block to be executed
 * Description: 5 below 1024
 * Return: 0
 */

int main(void)

{

	int num1 = 0, num2 = 1, n = 0;

	int sum = 0;



	while (n < 4000000)

	{

		n = num1 + num2;

		num1 = num2;

		num2 = n;



		if (n % 2 == 0)

			sum += n;

	}

	printf("%i\n", sum);

	return (0);

}
