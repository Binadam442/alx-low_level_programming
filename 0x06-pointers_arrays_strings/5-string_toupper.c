#include "main.h"

/**
 * @string_toupper:- change all lowercase letter
 * of a string to a uppercase.
 * @str: The string to be changed.
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *)
	{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
