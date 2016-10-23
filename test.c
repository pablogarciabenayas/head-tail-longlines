#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "libreria.h"

/* Programa para probar el correcto funcionamiento de la 
*   libreria implementada
*/

int main(int argc, char *argv[]){

	int lines;

	switch(argc){
		case 3:	
			lines = atoi(argv[2]);
			
			if(strcmp(argv[1],"head")==0){
				head(lines);
			}else if(strcmp(argv[1],"tail")==0){
				tail(lines);
			}else if(strcmp(argv[1],"longlines")==0){
				longlines(lines);
			}else{
			printf("Error, argumentos no validos.Uso:\n\t%s head Num_lineas\n\t%s tail Num_lineas\n\t%s longlines Num_lineas",argv[0],argv[0],argv[0]);
			return 1;
			}
		break;
		default:
			printf("Error, argumentos no validos.Uso:\n\t%s head Num_lineas\n\t%s tail Num_lineas\n\t%s longlines Num_lineas",argv[0],argv[0],argv[0]);
			return 1;
	} 
	return 0;
}
