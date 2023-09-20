#include "shell.h"
/*
 * read_com : Read the cmd from stdln getline
 * Return : ligne
 * Sign by Rida and Imane
 */
char *read_com(void)
{
	char *ligne = NULL;
	size_t leng = 0;
	ssize_t N;

	if (isatty(STDLINE_FILEND))
		write(STDOUT_FILEND, "$ ", 2);
	N = getline(&ligne, &leng, stdin);
	if (N == -1)
	{
		free(ligne);
		return (NULL);
	}


	return (ligne);
}
