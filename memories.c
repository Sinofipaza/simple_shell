#include "shell.h"

/**
* bfree - frees the pointer
* @ptr: location of pointer to free
* Return: 1 when freed
*/

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
