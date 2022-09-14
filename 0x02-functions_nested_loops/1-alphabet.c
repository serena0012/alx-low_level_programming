/*
 * File: 0-putchar.c
 * Auth: Gbenga Elegbede
 */
#include "main.h"
/**
 * Print_alphabets - a function that prints alphabets, in lowercase
 * follow by a new line.
 * Return: void
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}


