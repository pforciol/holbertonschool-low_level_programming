/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes of src to be copied
 *
 * Return: a pointer to the string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
