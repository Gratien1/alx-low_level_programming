#include "main.h"

/**
* print_triangle - prints a square
*@size: the size of the triangle
* Return: void
*/

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j, k;

		for (i = 1; i <= size; i++)
		{
			k = 0;
			while (k < size - i)
			{
				_putchar(' ');
				k++;
			}
			j = 0;
			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
}
