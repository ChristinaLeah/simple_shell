#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - executes the command ls -1 /temp into 5 different child processes
 *
 * Return: Always 0.
i */
int main(void)
{
	const char *command = "/bin/ls";
	const char *args[] ={command, "-1", "/tmp", NULL};

	int num_children = 5;
	int i;

	for (i=0; i < num_children; i++)
	{
		pid_t pid =fork();

		if (pid == -1)
		{
			perror("Fork Error:");
			return(1);
		}
		else if (pid ==0)
		{
			printf("child %d executing 1s -1 /tmp\n", i+1);
			execve(command, (char *const *)args, NULL);
			perror("execve error");
			return 1;
		}
		else 
		{
			int status;
			wait(&status);
			printf("child %d exited with status %d\n", i+1, WEXITSTATUS(status));
		}
	}
	return (0);
}
