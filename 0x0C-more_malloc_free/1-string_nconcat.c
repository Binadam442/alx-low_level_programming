#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return pts to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pts;
	int nmbr, len, i, j;

	nmbr = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nmbr < 0) /* account for negative n bytes */
		return (NULL);
	if (nmbr >= _strlen(s2)) /* account for n too big */
		nmbr = _strlen(s2);

	len = _strlen(s1) + nmbr + 1; /* +1 to account for null pointer */

	pts = malloc(sizeof(*pts) * len); /* malloc and check for error */
	if (pts == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		pts[i] = s1[i];
	for (j = 0; j < nmbr; j++)
		pts[i + j] = s2[j];
	pts[i + j] = '\0';

	return (pts);
}
