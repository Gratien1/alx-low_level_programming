#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		int i;

		for (i = 97; i < 123; i++)
			_putchar(i);
		_putchar('\n');
		j++;
	}
}
