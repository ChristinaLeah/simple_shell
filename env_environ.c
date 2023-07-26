#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the address of env and environ
 * @ac: arguements number
 * @av: array
 * @env: environment
 * Return: Always 0.
 */

int main(int ac, char *av[], char *env[])
{

	printf("Env address: %p\n", (void *)env);
	printf("Environ address: %p\n", (void *)environ);

	return (0);
}
