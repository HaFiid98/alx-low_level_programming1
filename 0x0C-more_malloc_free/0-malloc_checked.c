#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * *malloc_checked - aloocate meme using mall
 *
 * @b: the size
 *
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(sizeof(unsigned int) * b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
	free (p);
}
