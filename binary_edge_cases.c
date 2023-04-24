#include "main.h"
#include <limits.h>

int main(void)
{
    /* Test valid cases */
    _printf("%b\n", 0);
    _printf("%b\n", 1);
    _printf("%b\n", 15);
    _printf("%b\n", UINT_MAX);

    /* Test invalid cases */
    _printf("%b\n", -1);                /* negative argument */
    _printf("%b\n", "hello");           /* non-integer argument */
    _printf("%b\n", 1.234);             /* non-integer argument */
    _printf("%b\n", UINT_MAX + 1);      /* argument out of range */

    return (0);
}
