#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints $
 * Return: always 0 or -1 on failure
 */
int main(void)
{
	char *command = NULL;
		size_t size = 0;

	printf("$");
	getline(&command, &size, stdin);

	printf("%s", command);

	free(command);
	command = NULL;
	size = 0;

	printf("$");
	getdelim(&command,&size,'\n',stdin);

	printf("%s", command);

	free(command);
	return(0);
}
