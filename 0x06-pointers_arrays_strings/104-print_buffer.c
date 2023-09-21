#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a.
 * @c: buffer to print codes
 * @s: bytes of buffering codes for me
 * @l: line of codes for last
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int j = 0, k = 0;
while (j <= 9)
{
if (j <= s)
printf("%02x", c[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
j++;
}
while (k <= s)
{
if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
putchar(c[l * 10 + k]);
else
putchar('.');
k++;
}
}

/**
 * print_buffer - prints a buffering codes
 * @b: buffe
 * @size: size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int i = 0;
while (i <= (size - 1) / 10 && size)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
i++;
}
if (size == 0)
putchar('\n');
}
