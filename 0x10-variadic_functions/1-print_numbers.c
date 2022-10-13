#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: a pointer to a string to be printed between numbers
 * @n: number of integer passed to the function (4)
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list valist;
unsigned int i;

va_start(valist, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(valist, int));
if (i != (n - 1) && separator)
{
printf("%s", separator);
}
}
printf("\n");
va_end(valist);
}
