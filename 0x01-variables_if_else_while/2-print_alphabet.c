#include <stdio.h>
/**
 * main - Entry point
 *
 * Rturn: Always 0 (success/correct)
 */
int main(void)

{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
