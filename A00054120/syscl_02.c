#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>       
int main(void)
{
        int fd;
	const char*cadena="Hola, laura estuvo aquí";

	fd = open("tareaSysCl.txt", O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1) {
	perror ("falla en el llamado al sistema open");
	exit(EXIT_FAILURE);
	}

	if (dup2(fd, STDOUT_FILENO) == -1){
	perror ("fallo en el llamado al sistema dup2");
	exit(EXIT_FAILURE);
	}

	write(fd,cadena,strlen(cadena));
	close(fd);






}
