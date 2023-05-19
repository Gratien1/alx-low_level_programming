#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
	int i, j, k;

	k = 0;
	while (k < 10)
	{
		j = 0;
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
				_putchar('1');
			_putchar(j + '0');
			if (j == 9)
				j = -1;
			j++;
		}
		_putchar('\n');
		k++;
	}
}
