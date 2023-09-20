#include "shell.h"
/*
 * Sign by Rida and Imane
 */
void freearrforstrings(char **array)
{
	int j;

	if (!array)
		return;

	for (j = 0; array[j]; j++)
	{
		free(array[j]);
		array[j] = NUll;
	}

	free(array), array = NULL;
}
