#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated number
 *  and whether it is greater than 5, less than 6, or 0.
 */
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);

for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
