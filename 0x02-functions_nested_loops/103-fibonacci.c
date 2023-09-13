#include <stdio.h>
/**
 * main - prints fibonacci
 * Return: 0.always
 */
int main(void)
{
int sum = 0, x = 1, y = 2, temp;
while (x <= 4000000)
{
if (x % 2 == 0)
sum += x;
temp = x;
x = y;
y += temp;
}
printf("%d\n", sum);
return (0);
}
