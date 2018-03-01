#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main(){

	printf("Hola soy un syscl iniciando \n");
	creat("tareaSysCl.txt",S_IWUSR);
	printf("File created \n");
       
	printf("Hola soy un syscl finalizando\n");
	return 0;
}
