#include "main.h"

/**
 *my_int_printer - prints nums
 *@num: to be printed
 *@counter: counts
 *Return: returns
 */

int my_int_printer(int num, int counter)
{
	if (num == INT_MIN)
	{
	my_putchar('-');
	my_putchar('2');
	my_putchar('1');
	my_putchar('4');
	my_putchar('7');
	my_putchar('4');
	my_putchar('8');
	my_putchar('3');
	my_putchar('6');
	my_putchar('4');
	my_putchar('8');
	counter += 11;
	return (counter);
	}
	else if (num < 0)
	{
		my_putchar('-');
		num = -num;
		counter++;
	}
	if (num < 10)
	{
		my_putchar(num + '0');
		counter++;
	}
	else
	{
		counter = my_int_printer(num / 10, counter);
		counter = my_int_printer(num % 10, counter);
	}
	return (counter);
}
