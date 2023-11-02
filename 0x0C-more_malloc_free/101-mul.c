#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the product of two arguments received.
 *@argc: type int argument
 *@argv: type char argument of string.
 *Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int a, b, prod;

	if (argc != 3)
		printf("Error\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		prod = a * b;
		printf("%d\n", prod);
	}

	return (0);
}
