#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints something before main
 *
 * Return: void
 */

void first(void)
{
char *m;

m = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
printf("%s", m);
}
