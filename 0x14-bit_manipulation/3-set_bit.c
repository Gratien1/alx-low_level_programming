#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the num
 * @index: idx
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1, tmp = *n;
	unsigned int i = 0;

	while (tmp)
	{
		i++;
		tmp >>= 1;
		if (tmp == 0)
			i--;
	}
	if (i < index)
		return (-1);
	set <<= index;
	*n = (*n | set);

	return (1);
}
