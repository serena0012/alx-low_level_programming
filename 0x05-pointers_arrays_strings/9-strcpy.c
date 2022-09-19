#include "main.h"

/**
 * char *_strcpy - a function that copies the string
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i] != '\0'; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}


