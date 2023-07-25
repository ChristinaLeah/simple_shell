#include <stdio.h>
#include <stdlib.h>

/**
 * main - array of character points to the environmrntal strings
 *
 * Return: Always 0.
 */
extern char **environ;

int main(void)
{
	char **env_var =environ;

	while (*env_var != NULL)
	{
		printf("%s\n", *env_var);
		env_var++;
	}
	return (0);
}
