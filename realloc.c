#include "shell.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to the memory area
* @b: the byte to fill *s with
* @n: the number of bytes to be filled
*
* Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
/**
* ffree - frees a string of strings
* @pp: string of strings
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
* _realloc - reallocates a block of memory
* @ptr: pointer to the previous malloc'ated block
* @old_size: byte size of the previous block
* @new_size: byte size of the new block
*
* Return: a pointer to the new block of memory
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
/*
* Copy the contents from the previous block to the new block.
* If the new size is smaller than the old size, only copy up to
* the new size to avoid accessing out-of-bounds memory.
*/
	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
		free(ptr);
	return (p);
}
