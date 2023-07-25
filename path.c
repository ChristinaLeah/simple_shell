#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#define MAX_PATH_LEN 1024
#define MAX_FILENAME_LEN 256


/**
 * main - looks for files in the current path
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	if (ac <2)
	{
		printf("Usage: %s filename ...\n", av[0]);
		return (1);
	}

	char *path_env =getenv("PATH");
	if (path_env == NULL)
	{
		printf("unable to retrieve the PATH environment variable.\n");
		return (1);
	}

	char path_copy[MAX_PATH_LEN];
	strcpy(path_copy, path_env);

	char *path_dir = strtok(path_copy, ":");
	char filename[MAX_FILENAME_LEN];

	while (path_dir != NULL)
	{
		for (int i = 1; i < ac; i++)
		{
			snprintf(filename,MAX_FILENAME_LEN, "%s/%s", path_dir, av[i]);
		
		if (access(filename, F_OK) == 0)
		{
		printf("%s\n", filename);
		}
		}
		path_dir = strtok(NULL, ":");
	}
	return (0);
}
