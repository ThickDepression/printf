#include "main.h"

/**
 *my_switch - switch between cases
 *@args: arguments
 *@format: list of argument types
 *@counter: counter
 *Return: retrns counter
 */

int my_switch(va_list args, char format, int counter)
{
	va_list arg_copy;
	int num_handler;
	switch (format)
	{
		case '%':
			my_putchar('%');
			counter++;
			break;
		case 'c':
			my_putchar(va_arg(args, int));
			counter++;
			break;
		case 's':
			counter = my_str_printer(va_arg(args, char *), counter);
			break;
		case 'd':
		case 'i':
			counter = my_int_printer(va_arg(args, int), counter);
			break;
		case 'b':
			counter = print_binary(va_arg(args, int), counter);
			break;
		case 'S':
			counter = spcl_chr(va_arg(args, char *), counter);
			break;
		case 'p':
			counter = addr_printer(va_arg(args, void *), counter);
			break;
		case 'r':
			counter = rev_str_printer(va_arg(args, char *), counter);
			break;
		case 'R':
			counter = rot13(va_arg(args, char *), counter);
			break;
		case '+':
			if ((format + 1) == 'd' || (format + 1) == 'i')
			{
				va_copy(arg_copy, args);
				num_handler = va_arg(arg_copy, int);
				counter = flags_handler(num_handler, counter);
			}
			break;
		default:
			my_putchar('%');
			my_putchar(format);
			counter += 2;
			break;
	}
	return (counter);
}
