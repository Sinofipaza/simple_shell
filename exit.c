#include "shell.h"

/**
 * _strncpy - copies a string
 * @dest: destination string to copy to
 * @src: string copied
 * @n: amount of characters that get copied
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *s = dest;

	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		int j = i;

		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * *_strncat - puts together two strings
 * @dest: string1
 * @src: string2
 * @n: maximum amount of bytes to be used
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 * *_strchr - finds character in string
 * @s: string to be parsed
 * @c: character it's looking for
 * Return: pointer to memory home
 */

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		return (s);
	} while (*s++ != '\0');

	return (NULL);
}
