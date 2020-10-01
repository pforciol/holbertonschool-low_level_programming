/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	return (dest);
}
