#include "main.h"
/**
 * get_bit - return the bit at the wanted index
 * @n: the num
 * @index: wanted bit index
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = n, i = 0;

	index++;
	while (tmp)
	{
		++i;
		tmp >>= 1;
	}
	if (index > i)
	{
		return (-1);
	}
	while (index)
	{
		tmp = n >> (index - 1);
		if (tmp & 1)
			return (1);
		else
			return (0);
		index--;
	}
	return (-1);
}
