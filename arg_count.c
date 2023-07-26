#include <stdio.h>
#include <stdlib.h>
#define UNUSED(argc) int (argc)
#define UNUSED(*argv) int (*argv)

/**
 * main - prints our argument with no argc
 * @argc: arguemebt count
 * @argv: arguement vector
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL);
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
