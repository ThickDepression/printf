#include "main.h"
#include <limits.h>
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
	counter += 10;
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
/**
 *my_binary - convert binary
 *@num: num to be converted
 *@counter: counts
 *Return: returns
 */

int my_binary(int num, int counter)
{
	int i = 0;
	int j;
	int rev_len;
	char *rev_binary;
	char binary[100];

	while (num > 0)
	{
		binary[i] = num % 2 + '0';
		num = num / 2;
		i++;
	}
	binary[i] = '\0';
	rev_len = my_strlen(binary);
	rev_binary = malloc((rev_len + 1) * sizeof(char));
	if (rev_binary == NULL)
		return (-1);
	for (i = rev_len - 1, j = 0; i >= 0; i--, j++)
	{
		rev_binary[j] = binary[i];
	}
	rev_binary[j] = '\0';
	counter = my_str_printer(rev_binary, counter);
	free(rev_binary);
	return (counter);
}
