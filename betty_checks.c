#include <stdio.h>
#include <unistd.h>

/**
 *_getchar - gets character
 *Return: character
 */

int _getchar(void)
{
	char c;

	return (read(0, &c, 1) == 1 ? (unsigned char) c : EOF);
	
}
