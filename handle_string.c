#include "main.h"

/**
 * handle_str - handles string format
 * @s: variable list for %s format
 * Return: return 1 if true and 0 if not
 */

int handle_str(va_list s)
{
	char *str = va_arg(s, char *);
	int i = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		_putchar(str);
		str++;
	}
	return (i);
}
