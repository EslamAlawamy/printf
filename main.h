#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int p_char(va_list ch);
int p_string(va_list st);

typedef struct myformat
{
    char *type;
    int (*func)(va_list);
}print_type;

#endif
