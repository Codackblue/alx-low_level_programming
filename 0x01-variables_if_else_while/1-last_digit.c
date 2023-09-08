#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - first time
  * Return: Always 0
  */

int main(void) {
	 int n;

	 srand(time(0));
	 n = rand() - RAND_MAX / 2;
	
	 int lastDigit = abs(n) % 10;

	 printf("Random number: %d\n", n);
	 if (lastDigit > 5) {
	printf("and is greater than 5\n");
	 } else if (lastDigit == 0) {
	printf("and is 0\n");
	 } else {
	printf("and is less than 6 and not 0\n");
	 }
	 return (0);
}
