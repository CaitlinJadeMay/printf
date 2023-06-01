#include "main.h"

/**
 * handle_char - handle character formats
 * @c: variable list for %c format
 * Return: return 1 if true else somrthing else
 */

int handle_char(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);

	return (1);
}
