#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%+i\n", -2);
    _printf("%+i\n", 100);
    _printf("%+d\n", 0);
    _printf("%+d\n", -4);

    return (0);
}
