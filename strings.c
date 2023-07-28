#include "shell.h"

/**
 * _strcat - two strings
 * @dest: destination string
 * @src: origin string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
	dest[i] = '\0';
return (dest);
}

/**
 * _strcmp -  compares two strings
 * @s1: string
 * @s2:  another string
 * Return:  multiple returns
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
val = s1[i] - s2[i];
return (val);

}

/**
 * _strlen - gets size of a string
 * @s:  string to measure
 * Return:  length ofstring
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}

/**
 *_strncmp -  function that compares two strings
 *@s1: string
 *@s2: string
 *@n: number of characters
 * Return: difference
 */

size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}

/**
 * _strcpy - copies string pointed to by src into dest
 * @dest: destination of copy
 * @src: source of copy
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
