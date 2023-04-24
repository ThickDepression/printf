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
