#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 * Return: (0);
 */
int main(void)
{
struct dog my_dog;
init_dog(&my_dog, "Chester", 2.5, "Serena");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}
