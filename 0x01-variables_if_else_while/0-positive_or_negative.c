#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - serves as the main point of entry into your code
 * Return: returns 0 if code success, 1 if failure
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
