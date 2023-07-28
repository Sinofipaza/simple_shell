#include <unistd.h>
#include <stdio.h>

/**
 * _getchar - gets character
 * Return: int value or EOF
 */
int _getchar(void)
{
	char c;

	return (read(0, &c, 1) == 1 ? (unsigned char) c : EOF);
}
