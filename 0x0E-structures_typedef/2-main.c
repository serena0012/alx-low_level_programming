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
print_dog(&my_dog);
return (0);
}

