#include <stdio.h>
#include <unistd.h>

/**
 * av -a pointer to an array of strings
 *ac -counts the number of arguments
 * Return: Always 0
 */
int main(int argc, char* argv[])
{
        int i = 1;

        while (argv[i] != NULL)
	{
                printf("%s\n", av[i]);
        i++;
	}
        return (0);
}
