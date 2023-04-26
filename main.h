#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *string);
void int_string(int number, char *buffer);

#endif
