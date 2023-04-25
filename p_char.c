#include "main.h"
/**
 * p_char - print char
 * @ch: the character
 * Return: 0 successful
*/
int p_char(va_list ch)
{
	char my_ch;

	my_ch = va_arg(ch, int);
	_putchar(my_ch);
	return (1);
}
