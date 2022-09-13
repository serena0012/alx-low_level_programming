#include "main.h"
/**
 * Print_alphabets - a function that prints the alphabet  in lowercase
 * follow by a new line
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
int n;
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}


