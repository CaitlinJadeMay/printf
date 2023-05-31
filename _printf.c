#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include  "main.h"

/**
  * _format - get format for handles
  * @format: format handler
  * Return: return format specifier
  */

int (*_format(const char *format))(va_list)
{
	int i;

	convert spe[] =	{
		{"c", handle_char},
		{"s", handle_str},
		{NULL, NULL}
	};
	i = 0;
	while (spe[i].a != NULL)
	{
		if (*(spe[i].a) == *format)
		{
			break;
		}
		i++;
	}
	return (spe[i].b);
}

/**
  * _printf - printing differnt format
  * @format: format intake
  * Return: Return an integer
  */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*f)(va_list);
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}
		else
		{
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
				i += 2;
				continue;
			}
			else
			{
				f = _format(&format[i + 1]);
				if (f == NULL)
					return (-1);
				i += 2;
				count += f(ap);
				continue;
			}
		}
		i++;
	}
	va_end(ap);
	return (count);
}
