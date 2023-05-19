#include "main.h"
/**
 * binary_to_uint - convert from bin to dec
 * @b: bin num
 *
 * Return: dec
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, bas = 1, n, rest = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		n = b[i] - 48;
		if (n != 0 && n != 1)
			return (0);
		i++;
	}
	i--;
	while (i >= 0)
	{
		rest = b[i] - 48;
		dec += rest * bas;
		bas *= 2;
		i--;
	}

	return (dec);
}
