#include "main.h"
/**
 * p_string - print string
 * @st: the string
 * Return: 0 successful
*/
int p_string(va_list st)
{
	char *my_st;
	int in = 0;

	my_st = va_arg(st, char *);
	if (my_st == NULL)
	{
		my_st = "(null)";
	}
	while (my_st[in])
	{
		_putchar(my_st[in++]);
	}
	return (in);
}
