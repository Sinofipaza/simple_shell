#include "shell.h"

/**
* _memset - fills memory with constant byte
* @s: pointer to memory address
* @b: byte that fill *s with
* @n: amount of bytes needs filling
* Return: pointer to memory location
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
* ffree - frees string of strings
* @pp: string 
*/

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
* _realloc - reallocates memory block
* @ptr: pointer to mallocated block
* @old_size: byte size for previous block
* @new_size: byte size for new block
* Return: pointer to old block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}
