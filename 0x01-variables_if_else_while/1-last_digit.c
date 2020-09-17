#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Outputs a random n number, tells
 * it's last digit and if this last digit is g.t.
 * 5, equal to 0 or l.t. 6 and not 0.
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	int l_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, l_digit);
	if (l_digit > 5)
		printf("greater than 5\n");
	else if (l_digit == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
