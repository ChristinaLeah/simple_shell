#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * -getenv - get an environment variable without getenv
 *
 * Return: The value eof the environmental variable if founf,otherwise NULL
 */
char *_getenv(const char *name)
{
	extern char **environ;

	if (name == NULL)
	{
		return (NULL);
	}


	size_t name_len = strlen(name);

	for (char **env_var = environ; *env_var != NULL; env_var++)
	{
		if (strncmp(*env_var, name, name_len) == 0 && (*env_var)[name_len] == '=')
		{
			return &(*env_var) [name_len + 1];
		}
	}

	return NULL;
}

int main(void)
{
	const char *var_name = "HOME";
	char *value = _getenv(var_name);

	if (value)
	{
		printf("%s=%s\n", var_name, value);
	}
	else
	{
		printf("environment variable '%s' not found.\n", var_name);
	}

	return (0);
}
	
		
