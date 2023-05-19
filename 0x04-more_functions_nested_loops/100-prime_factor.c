#include <stdio.h>

/**
* prime_factor - find the largest prime factor
*@n: number
* Return: largest prime factor
*/

long prime_factor(long n)
{
	int i = 2;

	while (i * i < n)
	{
		while (n % i == 0)
			n /= i;
		i++;
	}
	return (n);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%ld\n", prime_factor(612852475143));
	return (0);
}
