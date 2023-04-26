#include "main.h"

int flags_handler(int num, int counter)
{
	if (num <= 0)
	{
		my_putchar(45);
		num = -num;
		counter++;

	}
	else
	{
		my_putchar(43);
		counter++;
	}
	counter = my_int_printer(num, counter);
	return (counter);
}
