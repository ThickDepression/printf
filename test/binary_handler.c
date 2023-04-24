#include "main.h"

/**
 * print_binary - Prints the binary representation of an unsigned int
 * @n: Tnumber
 * @counter: counts
 * Return: returns counter
 */

int print_binary(int n, int counter)
{
	unsigned int num;
	int i, j;
	char binary[32];

	num = n;
	if (num > UINT_MAX)
	{
		my_str_printer("(null)", counter);
		return (counter);
	}
	if (num == 0)
	{
		my_putchar('0');
		counter++;
		return (counter);
	}

	for (i = 0; num > 0; i++)
	{
		binary[i] = (num % 2 == 1) ? '1' : '0';
		num /= 2;
	}
	binary[i] = '\0';

	for (j = i - 1; j >= 0; j--)
	{
		my_putchar(binary[j]);
		counter++;
	}

	return (counter);
}
