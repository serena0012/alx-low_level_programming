/*
 * File: 101-print_number.c
 * Auth: Gbenga Elegbede
 */
#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
unsigned int x;
if (n < 0)
{
_putchar('-');
num = -num;
}
if ((num / 10) > 0)
print_number(num / 10);
_putchar((num % 10) + '0');
}

