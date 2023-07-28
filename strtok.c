#include "shell.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _free - free doubled character pointer
 * @list: doubled character pointer
 * @count: single character pointers number
 */

void _free(char **list, int count)
{
	for (; count >= 0; count--)
		do_mem(0, list[count]);
	do_mem(0, list);
}

/**
 * _strtok - make string doubled character pointer
 * @str: string you will split
 * @delim: character used to split string
 * Return: doubled charcter pointer
 */

char **_strtok(char *str, char *delim)
{
	int i = 0, j = 0, d = 0, len = 0, count = 0, check = 0;

	char **list = NULL;

	while (!(count = word_count(str, delim)))
		return (NULL);
	list = do_mem((count + 1) * sizeof(char *), NULL);
	if (!list)
		return (NULL);

	for (i = 0, len = 0, count = 0; str[i] || len;)
	{
		for (d = 0, check = 0; delim[d]; d++)
		{
			if (((str[i] == delim[d]) || (!str[i])))
			{
				check += 1;
				if (len)
				{
					list[count] = do_mem(sizeof(char) * (len + 1), NULL;
					if (!list[count])
					{
						_free(list, count);
						return (NULL);
					}
					for (j = 0; len; len--, j++)
						list[count][j] = str[i - len];
					list[count][j] = '\0';
					count++;
				}
			}
		}
		if (!check)
			len++;
		if (str[i])
			i++;
	}
	list[count] = NULL;
	return (list);
}
