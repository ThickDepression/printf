#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
    void *char_ptr = "Hello, world!";
    void *short_ptr = (void *) 0x1234;
    void *int_ptr = (void *) 0xdeadbeef;
    void *long_ptr = (void *) 0x123456789abcdef0;
    void *nullptr = NULL;

	printf("%p\n", char_ptr);
	_printf("%p\n", char_ptr);
	printf("%p\n", short_ptr);
	_printf("%p\n", short_ptr);
	printf("%p\n", int_ptr);
	_printf("%p\n", int_ptr);
	printf("%p\n", long_ptr);
	_printf("%p\n", long_ptr);
	printf("%p\n", nullptr);
	_printf("%p\n", nullptr);
    return 0;
}
