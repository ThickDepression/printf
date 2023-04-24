#include "main.h"

/**
 *my_binary - convert binary
 *@num: num to be converted
 *@counter: counts
 *Return: returns
 */

int my_binary(unsigned int num, int counter)
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
