#include"main.h"
/**
 * binary_to_uint - b to int
 * @b: char
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int ar[11] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};
unsigned int r = 0;
int i;
int coun = 0;

if (b == NULL)
	return (0);
while (b[coun] != '\0')
{
	coun++;
}
for (i = coun - 1; i >= 0 &&  b ; i--)
{
	if ((b[i] != '0') && (b[i] != '1'))
	{
		return (0);
	}
	if (b[i] == '1')
	{
		r = r + ar[coun - i];
	}
	}
return (r / 2);
}
