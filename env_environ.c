#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the address of env and environ
 *
 * Return: Always 0.
 */
extern char **environ;

int main(int ac, char *av[], char *env[])
{
	printf("Env address: %p\n", (void *)env);
	printf("Environ address: %p\n", (void *)environ);

	return (0);
}
