#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>


main(void)
{

   char cadena[11];	/* Depósito de los caracteres */
   int leidos;

   /* Apertura del archivo */

   int archivo = open ("tareaSysCl.txt", O_RDONLY);

   /* Comprobación */   
   if (archivo==-1)
   {
        perror("Error al abrir archivo:");

        exit(1);
   }
	lseek(archivo,400,SEEK_SET);

	leidos=read(archivo,cadena,10);
	close(archivo);
	printf("la cadena dice: %s\n", leidos,cadena );
}
