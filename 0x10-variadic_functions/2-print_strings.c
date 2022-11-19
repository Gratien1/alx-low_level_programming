#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *string;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);

		if (separator != NULL && i != n - 1)
		{
			if (string != NULL)
				printf("%s%s", string, separator);
			else
				printf("(nil)%s", separator);
		}
		else
			if (string != NULL)
				printf("%s", string);
			else
				printf("(nil)");
	}
	printf("\n");
	va_end(valist);
}
