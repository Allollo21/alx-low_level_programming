#include "main.h"
#include <stdio.h>

/**
 *main - entry point
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
