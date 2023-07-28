#include "shell.h"
#include <stdio.h>

/**
 * _reverse - reverses string content
 * @str: reversed string
 * @n: string length
 * Return: string
 */

char *_reverse(char *str, int n)
{
	char *begin = str;
	char *end;
	char hold;

	end = str + n - 1;
	for (; begin < end; begin++, end--)
	{
		hold = *end;
		*end = *begin;
		*begin = hold;
	}
	return (str);
}

/**
 * _itoa - integer into string
 * @num: int to make string
 * Return: converted int
 */

char *_itoa(int num)
{
	int = 0, neg = 0, cnum = num, len, remainder = 0;
	char *str;

	for (len = 0; cnum; cnum /= 10)
		;

	if (num == 0)
	{
		str = do_mem(2 * sizeof(char), NULL);
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}

	if (num < 0)
	{
		neg = 1;
		num = _num;
		len++;
	}

	str = do_mem((len + 1) * sizeof(char), NULL);

	while (num != 0)
	{
		remainder = num % 10;
		str[i++] = remainder + '0';
		num = num / 10;
	}

	if (neg)
		str[i++] = '-';

	str[i] = '\0';

	_reverse(str, i);

	return (str);
}

/**
 * _memset - memset function
 * @s: string to change
 * @b: value replacing
 * @n: bytes number to change
 * Return: pointer changed
 */

char *_memset(char *s, char b, int n)
{
	char *p = s;

	for (; n != 0; p++, n--)
		*p = b;
	return (s);
}
