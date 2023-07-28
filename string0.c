#include "shell.h"

/**
* _strlen - string length
* @s: string length to check
* Return: integer length
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
* _strcmp - does lexicogarphic comparison of two strangs
* @s1: string one
* @s2: string two
* Return: negative two less than the first
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
* starts_with - checks ba needle starts with haystack
* @haystack: string to be searching
* @needle: substring to be found
* Return: location of next char
*/

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
* _strcat - concatenates to strings
* @dest: destination buffer
* @src: source buffer
* Return: pointer toward destination buffer
*/

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
