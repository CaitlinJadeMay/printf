#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
  * struct print - typedef for printing various type
  * @a: type of print
  * @b: function to print
  */
typedef struct print
{
	char *a;
	int (*b)(va_list);
} convert;

/** Functions prototypes for main operations **/
int _printf(const char *format, ...);
int _putchar(char c);
int *_format(const char *format)(va_list);
int handle_char(va_list c);
int handle_str(va_list s);
int handle_int(va_list i);
int handle_dec(va_list d);
/** End of function prototypes **/

#endif
