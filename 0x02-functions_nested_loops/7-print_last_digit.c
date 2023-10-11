#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: used for the arguments of the function
 * Return: integer value
 */

int print_last_digit(int n)

{

	int num;



	num = n % 10;



	if (num < 0)

	num = num * -1;

	_putchar(num + '0');

	return (num);

}
