#include "shell.h"
/*
 * Project done by Rida and imane
 */
char **splitcom(char *ligne)
{
	char *split = NULL, *tmpp = NULL;
	char **commande = NULL;
	int cpteur = 0, j = 0;
	
	if (!ligne)
		return(NULL);
	tmpp = _strdup(ligne);

	split = strtok(tmpp, DELM); /*DELIM: DELM (\t\n) il faut etre declare en shell.h*/
	
	if (split == NULL)
	{
		free(ligne); ligne = NULL;
		free(tmpp); tmpp = NULL;
		return (NULL);
	}

	while (split)
	{
		cpteur++;
		split = strtok(NULL, DELM);
	}
	free(tmpp); tmpp = NULL;

	commande = malloc(sizeof(char *) * (cpteur + 1));
	if (!commande)
	{
		free(ligne), ligne = NULL;
		return (NULL);
	}

	split = strtok(ligne, DELM);
	while (split)
	{
		commande[j]= _strdup(split);
		split = strtok(NULL, DELM);
		j++;
	}
	free(ligne), ligne = NULL;
	commande[j] =NULL;
	return (commande);
}
