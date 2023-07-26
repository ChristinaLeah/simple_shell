#include <stdio.h>
#define UNUSED(ac) int (ac)
#define UNUSED(**av) int (**av)
#define UNUSED(**env) int (**env)

/**
 * main - prints the environment
 * @ac: arguement count
 * @av: variable
 * @env: environ
 *
 * Return: Always 0.
 */
int main(int ac, char **av, char **env)
{
	UNUSED(ac);
	UNUSED(**av);
	UNUSED(**env);
	unsigned int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
	 	i++;
	}
	return (0);
}
