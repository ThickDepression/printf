#include "main.h"
/**
 *print_second_hexadecimal - prints hexadecimal nums
 *@num: to be printed
 *@counter: counts
 *Return: returns counter
 */
int print_second_hexadecimal(unsigned int num, int counter)
{
	char hexadecimal_num[100];
	int i = 0;
	int j;

	while (num != 0)
	{
		int remainder = num % 16;

		if (remainder < 10)
			hexadecimal_num[i] = remainder + '0';
		else
			hexadecimal_num[i] = remainder + 'A' - 10;
		num /= 16;
		i++;
	}
	if (i == 0)
	{
		my_putchar('0');
		counter++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			my_putchar(hexadecimal_num[j]);
			counter++;
		}
	}
	return (counter);
}

/**
 *addr_printer - print addrs
 *@addr: adress to be printed
 *@counter: counts
 *Return: counter
 */

int addr_printer(void *addr, int counter)
{
	int i;
	int hex_digit;
	int printed_prefix = 0;
	unsigned long int address;

	if (addr == NULL)
	{
		my_str_printer("(nil)", counter);
		return (counter);
	}
	address = (unsigned long int)addr;
	my_putchar('0');
	my_putchar('x');
	counter += 2;
	for (i = (sizeof(void *) * 2) - 1; i >= 0; i--)
	{
		hex_digit = (address >> (i * 4)) & 0xf;
		if (hex_digit || printed_prefix)
		{
			my_putchar(hex_digit < 10 ? '0' + hex_digit : 'a' + (hex_digit - 10));
			printed_prefix = 1;
			counter++;
		}
	}
	if (!printed_prefix)
	{
		my_putchar('0');
		counter++;
	}
	return (counter);
}
