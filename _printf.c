#include "main.h"
/**
 * print_string - the main func
 * @string: th var
 * Return: success
 */
int print_string(char *string)
{
	int i = 0;

	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
/**
 * _printf - my main func
 * @format: the format in the func
 * Return: success
 */
int _printf(const char *format, ...)
{
	va_list fptr;
	char buffer[BUFFER];
	int tlen = 0;
	int i;

	if (format == NULL)
		return (-1);
	va_start(fptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					tlen = tlen + _putchar(va_arg(fptr, int));
					break;
				case 's':
					tlen = tlen + print_string(va_arg(fptr, char *));
					break;
				case '%':
					tlen = tlen + _putchar('%');
					break;
				case 'd':
				case 'i':
					int_string(va_arg(fptr, int), buffer);
					tlen = tlen + print_string(buffer);
					break;
				default:
					return (-1);
			}
		}
		else
			tlen = tlen + _putchar(format[i]);
	}
	va_end(fptr);
	return (tlen);
}
