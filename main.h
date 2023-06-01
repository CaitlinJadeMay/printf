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

int _printf(const char *format, ...);
int _putchar(char c);
int handle_char(va_list c);
int handle_str(va_list s);
int handle_int(va_list i);
int handle_dec(va_list d);
int handle_binary(va_list b);
int handle_float(va_list f);
int handle_e(va_list e);
int handle_g(va_list g);
int handle_l(va_list l);
int handle_zero(va_list zero);
int handle_hex(va_list h);
int handle_u(va_list u);
int handle_octa(va_list o);
int handle_x(va_list x);
int handle_X(va_list X);
int handle_p(va_list p);
int handle_S(va_list S);
int handle_r(va_list r);
int handle_R(va_list R);
int handle_add(va_list add);
int handle_less(va_list less);
int handle_space(va_list space);
int handle_sharp(va_list sharp);

#endif
