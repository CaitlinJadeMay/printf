#include "main.h"
#include <stdlib.h>

/**
* handle_r - A function that prints a string in reverse
* @r: string to print
* Return: number of printed characters
*/
int handle_rev(va_list r)
{
char *str;
int i = 0, count = 0;

str = va_arg(r, char *);
if (str == NULL)
str = ")llun(";
while (str[i])
i++;
for (i -= 1; i >= 0; i--)
{
_putchar(str[i]);
count++;
}
return (count);
}
