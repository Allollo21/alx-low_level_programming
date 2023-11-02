#include <stdio.h>
#include <stdlib.h>

/**
 *is_digit - Check if a string is composed of digits
 *@str: The string to check
 *Return: 1 if composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		    return (0);
		str++;
	}

	return (1);
}

/**
 *main - Multiply two positive numbers
 *@argc: Number of arguments
 *@argv: Array of arguments
 *Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	char *num1 = argv[1], *num2 = argv[2];
	int len_result = 0, len1 = 0, len2 = 0;

	while (num1[len1] || num2[len2])
	{
		int product = (len1 >= 0 ? num1[len1] - '0' : 0) * (num2[len2] - '0');

		len_result += product;
		len_result = len_result / 10 + (len_result % 10);
		len1 -= 1;
		len2 += 1;
	}

	printf("%d\n", len_result);
	return (0);
}
