#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
