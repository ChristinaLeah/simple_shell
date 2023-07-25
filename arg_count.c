#include <stdio.h>
#include <stdlib.h>

/**
 *@argv: array of strings
 * main - prints our argument with no argc
 * @argc: argument counts 
 * Return:0
 */
int main(int argc,char *argv[])
{
	int i = 0;
	while (argv[i]!= NULL);
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
