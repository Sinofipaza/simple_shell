#include <stdio.h>
#include <unistd.h>

/**
 *_getchar - gets character
 *Return: int value or E0F
 */

int _getchar(void)
{
	char c;

	return (read(0, &c, 1) == 1 ? (unsigned char) c : E0F);
	
}
