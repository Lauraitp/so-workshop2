#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(){

	printf("Hola soy un syscl iniciando \n");


	printf("File created \n",S_IRWXU);

	creat("tareaSysCl.txt",S_IRWXU);
	printf("File created \n");

       
	printf("Hola soy un syscl finalizando\n");
	return 0;
}
