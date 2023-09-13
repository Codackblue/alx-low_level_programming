#include <stdio.h>
/**
 * main - prints finonacci sequence
 * Return: 0.
 */
int main(void)
{
int i;
unsigned long x = 0, y = 1, temp;
for (i = 0; i < 50 ; i++)
{
temp = x + y;
printf("%lu", temp);
x = y;
y = temp;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
