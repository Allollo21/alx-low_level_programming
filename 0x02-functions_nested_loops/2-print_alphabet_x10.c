#include "main.h"

/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Return:void
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}

		putchar('\n');
	}
}
