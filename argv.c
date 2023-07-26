#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * split_string - splits the array
 * @str: character
 * @delim: delimiter
 * @num_words: number words
 * Return: 0
 */

char **split_string(char *str, const char *delim, int *num_words)
{
	char **words = NULL;
	char *token = strtok(str, delim);
	int count = 0;

	while (token != NULL)
	{
		words = realloc(words, (count + 1) * sizeof(char *));
		words[count] = strdup(token);
		count++;

		token = strtok(NULL, delim);
	}

	*num_words = count;
	return (words);
}
