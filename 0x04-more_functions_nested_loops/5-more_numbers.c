#include "main.h"

/**
*more_numbers - prints number 0-14
*
*
*
*
*/
void more_numbers(void)
{
int c, i;
for (i = 1; i <= 10; i++)
{
for (c = 0; c <= 14; c++)
{
if (c >= 10)
{
_putchar('1');
}
_putchar (c % 10 + '0');
}
_putchar('\n');
}
return;
}
