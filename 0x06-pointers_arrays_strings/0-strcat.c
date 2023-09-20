#include "main.h"

/**
 * _strcat - Concatenate (append) one string to another.
 * @dest: The destination string to which 'src' will be appended.
 * @src: The source string to be appended to 'dest'.
 * Return: A pointer to the concatenated string (dest).
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
return (dest);
}
