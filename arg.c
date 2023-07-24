#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints our arguement with no ac
 * @argc: arguement count
 * @argv: an array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
