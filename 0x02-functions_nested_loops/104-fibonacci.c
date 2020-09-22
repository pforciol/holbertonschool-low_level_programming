#include <stdio.h>

/**
 * main - prints the first 98 fibonacci numbers
 *
 * Description: an unsigned long can contains 18,446,744,073,709,551,615.
 * The 92th term of the fibonacci sequence is 19,740,274,219,868,223,167.
 * So we can't store all the value of the fibonacci sequence in a unsigned
 * long sarting from 92th term. We will split the numbers in two big enough
 * parts to display them without using long long variables.
 *
 * Return: always 0 (Success)
 */

int	main(void)
{
	unsigned long n_minus1 = 2, n_minus2 = 1, n = 0;
	unsigned long n_m1h1, n_m1h2, n_m2h1, n_m2h2, n_h1, n_h2;
	int i = 0;

	printf("%lu, %lu", n_minus2, n_minus1);
	while (i < 90) /* 92 - 2 because I hardcode the first 2 values */
	{
		printf(", ");
		n = n_minus1 + n_minus2;
		n_minus2 = n_minus1;
		n_minus1 = n;
		printf("%lu", n);
		i++;
	} /* This code is the same as 102-fibonacci.c */

	n_m1h1 = n_minus1 / 1000000000; /* Get the left part of n_minus1 */
	n_m1h2 = n_minus1 % 1000000000; /* Get the right part of n_minus1 */
	n_m2h1 = n_minus2 / 1000000000; /* Get the left part of n_minus2 */
	n_m2h2 = n_minus2 % 1000000000; /* Get the right part of n_minus2 */

	while (i++ < 96) /* Same as up, 98 - 2 for the two hardoded first values */
	{
		n_h1 = n_m1h1 + n_m2h1;
		n_h2 = n_m1h2 + n_m2h2;

		if (n_h2 >= 1000000000)
		{
			n_h1 += 1; /* If the second part overflows, add to first part */
			n_h2 %= 1000000000; /* and only get the wanted digits */
		}

		printf(", %lu%lu", n_h1, n_h2);

		n_m2h1 = n_m1h1;
		n_m2h2 = n_m1h2;
		n_m1h1 = n_h1;
		n_m1h2 = n_h2;
	}
	printf("\n");
	return (0);
}
