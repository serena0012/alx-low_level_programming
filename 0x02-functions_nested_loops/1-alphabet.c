#include "_putchar.h"
/**
 * Print_alphabets - a function that prints the alphabet  in lowercase
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


