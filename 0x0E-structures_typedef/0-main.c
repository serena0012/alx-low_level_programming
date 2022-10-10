#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: (0);
 */
int main(void)
{
struct dog my_dog;

my_dog.name = "Chester";
my_dog.age = 2.5;
my_dog.owner = "Serena";
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}

