#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the address of environ
 *
 * Return: Always 0;
 */
extern char **environ;

int main(void)
{
	printf("environ address: %p\n", (void *)environ);

	return 0;
}
