/**
 * _sqrt_check - checks if the square root exists
 * @n: the number to calculate the natural square root
 * @sqrt: the sqrt to check
 *
 * Return: the sqrt if found, else -1
 */

int		_sqrt_check(int n, int sqrt)
{
	if (sqrt > n)
		return (-1);
	if (sqrt * sqrt == n)
		return (sqrt);
	return (_sqrt_check(n, sqrt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the natural square root
 *
 * Return: the natural square root of a number
 */

int		_sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));
}
