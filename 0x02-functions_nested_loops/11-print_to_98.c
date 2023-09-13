#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - ptints to above
 * @n: The number to start from
 * Return: void.
 */
void print_to_98(int n)
{
if (n < 99)
while (n < 99)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
else
{
while (n != 97)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
}
printf("\n");
}
