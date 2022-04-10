#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success/correct)
 */
int main(void)
{
int digit1, digit2;

for (1 = 0; 1 < 9; 1++)
{
for (2 = 1 = 1; 2 < 10; 2++)
{
putchar((1 % 10) + '0');
putchar((2 % 10) + '0');

if (1 == 8 && 2 == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);

}

