#include "shell.h"
/**
 * freearrforstrings - free arr for strings
 * @array: arrayfr
 * Return: NULL
 */
void freearrforstrings(char **array)
{
	int j;

	if (!array)
		return;

	for (j = 0; array[j]; j++)
	{
		free(array[j]);
		array[j] = NULL;
	}

	free(array), array = NULL;
}

/**
 * _strdup - duplicat a string
 * @str: strings charact
 * Return: new_str
 */

char *_strdup(const char *str)
{
	char *new_str;
	size_t leng = 0, j;

	if (str == NULL)
		return (NULL);

	while (str[leng] != '\0')
	{
		leng++;
	}
	new_str = (char *)malloc((leng + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (j = 0; j <= leng; j++)
		new_str[j] = str[j];

	return (new_str);
}
