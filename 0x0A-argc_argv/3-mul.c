#include<stdio.h>
#include<stdlib.h>
#include <string.h>
/**
 * main - mitply two
 *
 * @argc : uknow
 * @argv : ukonw
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
