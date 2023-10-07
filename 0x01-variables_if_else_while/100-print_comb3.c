#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i, n;

	for (i = '0'; i <= '9'; i++)
	{
		for (n = i + 1; n <= '9'; n++)

			if (i != n)
			{
				putchar(i);
				putchar(n);

				if (i == '8' && n == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
	}

	putchar('\n');
	return (0);
}
