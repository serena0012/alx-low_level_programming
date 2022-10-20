#include <stdlib.h>
#include "dog.h"

int _strLen(char *str);
void fillMem(char *str, int strLen, char *dest);

/**
 * new_dog - create a new dog
 *
 * @name: Name of dog
 *
 * @age: age of dog
 *
 * @owner: owner of dog
 *
 * Return: Pointer to the newly created dog (SUCCESS) or
 * NULL if sufficient memory was available (FAILURE)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;
int nameLen, ownerLen;

n_dog = malloc(sizeof(dog_t));

if (n_dog == NULL)
return (NULL);

nameLen = _strLen(name);
n_dog->name = malloc(sizeof(char) * nameLen + 1);

if (n_dog->name == NULL)
{
free(n_dog);
return (NULL);
}

fillMem(name, nameLen, n_dog->name);

ownerLen = _strLen(owner);
n_dog->owner = malloc(sizeof(char) * ownerLen + 1);

if (n_dog->owner == NULL)
{
free(n_dog);
free(n_dog->name);
return (NULL);
}

fillMem(owner, ownerLen, n_dog->owner);

n_dog->age = age;

return (n_dog);
}

/**
 * _strLen - Get length of a string
 *
 * @str: Astring
 *
 * Return: Length of string
 */

int _strLen(char *str)
{
int i = 0;

while (str[i])
i++;

return (i);
}

/**
 * fillMem - copy string literal to allocated memory
 *
 * @str: string literal
 *
 * @strLen: @str length
 *
 * @dest: The allocated memory
 */

void fillMem(char *str, int strLen, char *dest)
{
int i;

for (i = 0; i < strLen; i++)
dest[i] = str[i];

dest[i] = '\0';
}

