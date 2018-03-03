#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(){

	printf("Hola soy un syscl iniciando \n");

	printf("File created \n",S_IRWXU);
       
	printf("Hola soy un syscl finalizando\n");
	return 0;
}
