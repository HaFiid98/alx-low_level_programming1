#include <ctype.h>
#include "main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if @c is alphabetic otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
