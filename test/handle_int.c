#include "main.h"
#include <stdarg.h>

/**
 * handle_int - handles integers prints
 * @i: variable input
 * Return: return the no of counyts
 */

int handle_int(va_list i)
{
	int p[10];
	int x = 1, power = 100000000, j, sum = 0, count = 0;

	j = va_arg(i, int);
	if (j < 0)
	{
		j *= -1;
		_putchar('-');
		count++;
	}
	p[0] = j / power;

	while (x < 10)
	{
		power /= 10;
		p[x] = (j / power) % 10;
		x++;
	}
	for (x = 0; x < 10; x++)
	{
		sum += p[x];
		if (sum != 0 || x == 9)
		{
			_putchar('0' + p[x]);
			count++;
		}
	}
	return (count);
}
