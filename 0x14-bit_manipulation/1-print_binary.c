#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the num
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int tmp = n;

	if (n == 0)
		printf("0");
	while (tmp)
	{
		++i;
		tmp >>= 1;
	}
	i--;
	for (; i >= 0; i--)
	{
		tmp = n >> i;
		if (tmp & 1)
			printf("1");
		else
			printf("0");
	}
}
