#include "shell.h"
/**
* _strncpy - copies a string
* @dest: the destination string to be copied to
* @src: the source of the  string
* @n: the maximum number of characters to be copied
*
* Return: the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *s = dest;

	for (i = 0; src[i] != '\0' && i < n - 1; i++)
	dest[i] = src[i];
	if (i < n)
	{
		while (i < n)
		dest[i++] = '\0';
	}
	return (s);
}
/**
* _strncat - concatenates two strings
* @dest: the first string
* @src: the second string
* @n: the maximum number of characters to be concatenated
*
* Return: the concatenated string
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (dest[i] != '\0')
	i++;
	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];
	if (j < n)
		dest[i] = '\0';
	return (s);
}
/**
* _strchr - locates a character in a string
* @s: the string to be parsed
* @c: the character to look for
*
* Return: a pointer to the first occurrence of the character in the string,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		return (s);
	} while (*s++ != '\0');
	return (NULL);
}
