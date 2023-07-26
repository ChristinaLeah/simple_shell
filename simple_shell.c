#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define MAX_INPUT_LENGTH 100

/**
 * main - a UNIX command line interpreter
 *
 * Return: always 0
 */
int main(void)
{
	pid_t pid;
	char command[MAX_INPUT_LENGTH];
	while (1)
	{
		printf("#cisfun$ ");
		if (fgets(command, sizeof(command), stdin) == NULL)
		{
			printf("\n");
			break;
		}

		command[strcspn(command, "\n")] = '0';

		pid = fork();

		if (pid < 0)
		{
			perror("fork has failed");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			char *args[2];

			args[0] = command;
			args[1] = NULL;
			if (execvp(args[0], args) == -1)
			{
				perror("command not found");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			int status;

			waitpid(pid, &status, 0);
		}

	}
	return (0);
}
