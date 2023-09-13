#include <stdio.h>
/**
 * main - addition of all the work
 * Return: On 0 (sucess)
 */
int main(void)
{
int i, sum = 0;
for (i = 3; i < 1024; i++)
if (i % 3 == 0 || i % 5 == 0)
sum += i;
printf("%d\n", sum);
return (0);
}
