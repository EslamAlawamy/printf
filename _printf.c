#include "main"
/**
 *func_format - check condetions
 *@format: the syring
 *Return: the number of printed char
*/
int (*func_format(const char *format))(va_list)
{
	int index = 0;
	print_type p_my_func[] = {
		{"c", p_char},
		{"s", p_string},
		{"d", p_d},
		{NULL, NULL}
	};

	for (; p_my_func[index].type != NULL; index++)
	{
		if (*(p_my_func[index].type) == *format)
			break;
	}
	return (p_my_func[index].func);
}

/**
 * _printf - function for format printing
 * @format: list of arguments to printing
 * Return: Number of characters to printing
 */
int _printf(const char *format, ...)
{
	va_list ptr;
	int (*func)(va_list);
	unsigned int in = 0, chcount = 0;

	if (format == NULL)
		return (-1);

	va_start(ptr, format);
	for (in = 0; format && format[in]; in++)
	{
		if (format[in] != '%')
		{
			_putchar(format[in]);
			chcount++;
			in++;
			continue;
		}
		else
		{
			if (format[in + 1] == '%')
			{
				_putchar('%');
				chcount++;
				in += 2;
				continue;
			}
			else
			{
				func = func_format(&format[in + 1]);
				if (func == NULL)
					return (-1);
				in += 2;
				chcount += func(ptr);
				continue;
			}
		}
	}
	va_end(ptr);
	return (chcount);
}
