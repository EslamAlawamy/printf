#include "main.h"

int p_i(va_list i)
{
	int arr[10];
	int j = 0, m = 1000000000, n, sum = 0, count = 0;

	n = va_arg(i, int);
	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		count++;
	}
	arr[0] = n / m;

	for (j = 0; j < 10; j++)
	{
		m = m / 10;
		arr[j] = (n / m) % 10;
	}

	for (j = 0; j < 10; j++)
	{
		sum = sum + arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			count++;
		}
	}
	return (count);
}

