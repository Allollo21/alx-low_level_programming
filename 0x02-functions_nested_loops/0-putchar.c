#include "main.h"
#include <unistd.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char sentence[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(sentence[i]);
	_putchar('\n');

	return (0);
}
