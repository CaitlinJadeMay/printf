#include <stdarg.h>
#include "main.h"

/**
  * handle_dec - function that handle decimals of base 10
  * @d: variable integer to print
  * Return: return counts of digits
  */

int handle_dec(va_list d)
{
	int p[10];
	int i = 1, power = 100000000, j, sum = 0, count = 0;

	j = va_arg(d, int);
	if (j < 0)
	{
		j *= -1;
		_putchar('-');
		count++;
	}
	p[0] = j / power;

	i = 1;
	while (i < 10)
	{
		power /= 10;
		p[i] = (j / power) % 10;
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		sum += p[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + p[i]);
			count++;
		}
	}
	return (count);
}
