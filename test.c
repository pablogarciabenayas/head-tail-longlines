#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libreria.h"

/* Programa para probar el correcto funcionamiento de la 
*   libreria implementada
*/

int error(char *value){
	printf("Error, argumentos no validos.Uso:\n\t%s head Num_lineas\n\t%s tail Num_lineas\n\t%s longlines Num_lineas\nNum_lineas debe ser el numero de lineas que desea\n",value,value,value);
	return 1;
}

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
				return error(argv[0]);
			}
		break;
		default:
			return error(argv[0]);
	} 
	return 0;
}
