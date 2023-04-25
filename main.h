#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list ch);
int p_string(va_list st);


/**
 * struct myformat - this is the struct
 * @type: is a type
 * @func: is a pointer to func
 * Description: this is myformat struct
*/

typedef struct myformat
{
	char *type;
	int (*func)(va_list);
} print_type;

#endif
