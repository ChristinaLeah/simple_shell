#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_COMMAND_LEN 100

/**
 * main - super simple shell
 *
 * Returns: Always 0
 */
int main(void)
{
	pid_t pid;
	char command[MAX_COMMAND_LEN];
	const char *prompt = "#cisfun$ ";

	while (1)
	{
		printf("%s", prompt);

		if (fgets(command, MAX_COMMAND_LEN, stdin) == NULL)
			break;

		command[strcspn(command, "\n")] = '\0';

		pid = fork();

		if (pid == -1)
		{
			perror("fork error");
			return (1);
		}
		else if (pid == 0)
		{
			execl(command, command, NULL);
			perror("exec error");
			exit(1);
		}
		else
		{
			int status;
			wait(&status);

		}
	}
	return (0);
}
