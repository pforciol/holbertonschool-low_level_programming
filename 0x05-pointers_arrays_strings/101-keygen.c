#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for our keygen
 * Return: 0
 */

int	main(void)
{
	char password[60] = "\0";
	char hash[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int sum = 0, i = 0, tmp = 0;

	srand(time(NULL));
	while (sum < 2772 - 'z')
	{
		tmp = rand() % 62;
		sum += hash[tmp];
		password[i++] = hash[tmp];
	}

	password[i] = (2772 - sum);
	password[i + 1] = '\0';

	printf("%s", password);
	return (0);
}
