#include "shell.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * do_mem - static record
 * @size: size to malloc
 * @ptr: pointer to free
 * Return: malloced pointer
 */

void *do_mem(size_t size, void *ptr)
{
	static list_t *all;
	void *ret = NULL;
	int i = 0, len = 0;

	if (size)
	{
		ret = malloc(size);
		if (!ret)
			do_exit(2, "malloc failed", EXIT_FAILURE);
		for (i = 0; (unsigned int)i < size; i++)
			((char *)ret)[i] = 0;
		__add_node_end(&all, ret);
		return (ret);
	}
	else if (ptr)
	{
		len = __list_len(all);
		for (i = 0; i < len; i++)
		{
			if (__get_node_at_index(all, i) -> ptr == ptr)
			{
				__delete_node_at_index(&all, i);
				break;
			}
		}
		free(ptr);
		return (NULL);
	}
	else
	{

		__free_list_full(all);
		return (NULL);
	}
	return (NULL);
}

/**
 * do_exit - error message
 * @fd: file descriptor to write message
 * @msg: message that print
 * @code: numerical exit code
 */

void do_exit(int fd, char *msg, int code)
{
	if (*msg)
	{
		write(fd, msg, _strlen(msg));
	}
	do_mem(0, NULL);

	exit(code);
}
