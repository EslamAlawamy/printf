#include "main.h"
/**
 * p_string - print string
 * @st: the string
 * Return: 0 successful
*/
int p_string(va_list st)
{
	char *my_st;
	int in;

	my_st = va_arg(st, char *);
	if (my_st == NULL)
	{
		my_st = "(null)";
	}
	for (in = 0; my_st[in] != '\0'; in++)
	{
		_putchar(my_st[in]);
	}
	return (in);
}
