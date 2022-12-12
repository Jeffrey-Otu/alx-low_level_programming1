#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more header goes there */

/* betty style doc for function main goes there */
/**
 * main - Enry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your codes goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
