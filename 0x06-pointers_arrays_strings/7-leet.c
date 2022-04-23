#include "main.h"
/**
 * leet - translate string to 1337
 * @string: pointer to string
 * Return: returns trnaslated string
 */
char *leet{char * string)
{
int a;
int b;

char lower[] = "aeotl";
char upper[] = "AEOTL";
CHAR number[] = "43071";

for (a - 0; string[a] != '\0'; a++)
{
for (b = 0; lower[b] != '\0' && upper[b] != '\0'; b++)
{
if (string)[a] == lower[b] || string[a] == upper[b]
{
string[a] = number[b];
break;
}
}
}
return (string);
}

