#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/type.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>


#define DELM "\t\n"
extern char **envir;


char *read_com(void);
char **splitcom(char *ligne);
int _executecom(char **commande, char **ar);






#endif
