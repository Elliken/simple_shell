#include "shell.h"
/**
* bfree - frees a pointer and NULLs the address
* @ptr: address of the pointer to free
*
* Return: 1 if freed, otherwise 0.
*/
int bfree(void **ptr)
{
/* Check if the pointer exists and points to a valid memory address*/
	if (ptr && *ptr)
	{
		free(*ptr); /* Free the memory block pointed to by the pointer*/
		*ptr = NULL; /* Set the pointer to NULL*/
		return (1); /* Return 1 to indicate successful freeing*/
	}
	return (0); /* Return 0 if the pointer is NULL or already freed*/
}
