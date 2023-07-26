#include <stdio.h>
#include <unistd.h>

/**
 * main - gives an arguement
 * @argc: arguement count
 * @argv:an array of strings pointer
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 1;

	while (argv[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
