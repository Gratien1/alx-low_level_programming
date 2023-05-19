#include "main.h"

/**
* print_diagonal- draws a diagonal line in the terminal
*@n: the number of times the character \ should be printed
* Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		j = 0;
		while (j < n)
		{
			for (i = 0; i <= j; i++)
			{
				if (i > 0)
				{
					_putchar(' ');
				}
			}
			_putchar(92);
			_putchar('\n');
			j++;
		}
	}
}
