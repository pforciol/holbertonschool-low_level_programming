/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array
 * @n: the number of elements in the array
 */

void	reverse_array(int *a, int n)
{
	int i = 0;
	int tmp = 0;

	n = n - 1;

	while (i <= n + 1 / 2)
	{
		tmp = a[n];
		a[n] = a[i];
		a[i++] = tmp;
		n--;
	}
}
