#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';
	int i = '0';

	for (; i <= '9'; i++)
		putchar(i);
	for (; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');
	return (0);
}
