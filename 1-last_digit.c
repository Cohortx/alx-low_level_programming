#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success), 1 (failure)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (ld > 5)
		printf("and is greater than 5\n");
	else if (ld == 0)
		printf("and is 0\n");
	else if (ld < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);		
}
