#include "main.h"
/**
 * leet - encode a string
 * @str: The string to encode
 * Return: The encoded string
 */
char *leet(char *str)/*leet function*/
{
int i, j;
char c[] = "aAeEoOtTlL";
char n[] = "4433007711";
i = 0;
while (str[i] != '\0')
{
j = 0;
while (c[j] != '\0')
{
if (str[i] == c[j])
{
str[i] = n[j];
}
j++;
}
i++;
}
return (str);
}
