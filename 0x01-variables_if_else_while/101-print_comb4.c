#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				if (x != y && y != z && x != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x == '7' && y == '8' && z == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
