#include "shell.h"

int _executecom(char **commande, char **ar)
{

	pid_t chil;
	int statu;

	chil = fork();
	if (chil == 0)
	{
		if (execve(commande[0], commande, environ) == -1)
		{
			perror(ar[0]);
			freearrforstrings(commande);
			exit(0);
		}
	}
	else
	{
		waitpid(chil, &statu, 0);
		freearrforstrings(commande);
	}
	return (WEXITSTATUS(statu));
}
