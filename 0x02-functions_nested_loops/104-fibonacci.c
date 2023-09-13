#include <stdio.h>
/**
 * main - prints the fibonaci
 * Return: 0.
 */
int main(void)
{
unsigned long int i;
unsigned long int fir = 1;
unsigned long int sec = 2;
unsigned long int l = 1000000000;
unsigned long int bef1;
unsigned long int bef2;
unsigned long int aft1;
unsigned long int aft2;
printf("%lu", fir);
for (i = 1; i < 91; i++)
{
printf(", %lu", sec);
sec += fir;
fir = sec - fir;
}
bef1 = (fir / l);
bef2 = (fir % l);
aft1 = (sec / l);
aft2 = (sec % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
aft1 = aft1 + bef1;
bef1 = aft1 - bef1;
aft2 = aft2 + bef2;
bef2 = aft2 - bef2;
}
printf("\n");
return (0);
}
