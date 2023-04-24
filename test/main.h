#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

int _printf(const char * const format, ...);
int my_switch(va_list args, char format, int counter);
int my_putchar(char c);
int my_strchar(char *str, char c);
int my_str_printer(char *str, int counter);
int my_strlen(const char *s);
int digit_printer(int n, int counter);
int my_int_printer(int num, int counter);
int print_binary(int n, int counter);
int spcl_chr(const char *s, int counter);

#endif
