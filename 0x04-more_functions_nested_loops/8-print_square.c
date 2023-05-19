#include "main.h"

/**
* print_square- prints a square
*@size: the size of the square
* Return: void
*/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		j = 0;
		while (j < size)
		{
			for (i = 0; i < size; i++)
				_putchar('#');
			_putchar('\n');
			j++;
		}
	}
}
