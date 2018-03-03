#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(){

	printf("Hola soy un syscl iniciando \n");
<<<<<<< HEAD

	printf("File created \n",S_IRWXU);
=======
	creat("tareaSysCl.txt",S_IRWXU);
	printf("File created \n");
>>>>>>> 9bb52ac9f622ccb29241247e92d4d39fa25cf7cd
       
	printf("Hola soy un syscl finalizando\n");
	return 0;
}
