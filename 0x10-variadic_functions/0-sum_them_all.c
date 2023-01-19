#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list s;

	va_start(s , n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(s , int);

	va_end(s);
	return (sum);

}
