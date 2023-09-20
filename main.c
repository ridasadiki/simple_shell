#include "shell.h"

/*
 * main - Simple shell for the fonction main
 * @c: num of arg
 * @ar: args
 * return: 0 always(succ)
 * Sign by Rida and Imane
 */
int main(int c, char **ar)
{
	char *line = NULL, **commande = NULL;
	int statu = 0;
	(void) c;


	while (1)
	{
		ligne = read_com();
		if (ligne == NULL)  /* this mean reache end of file until user use , Ctrl + D*/
		{
			if (isatty(STDLINE_FILEND))
				write(STDOUT_FILEND, "\n", 1);
			return (statu);
		}


		commande = splitcom(ligne);
		if (!commande)   /*if user did not write a charc, ask him again to ..*/
			continue;

		statu = _executecom(command, ar);
	}
}
