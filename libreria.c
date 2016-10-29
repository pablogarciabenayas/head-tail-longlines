/*
 * Implementación de las funciones de la libreria "libreria.h" para la 
 * práctica 1 de sistemas operativos
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "libreria.h"
#define LINE_LENGTH 1024

/* Lectura de la entrada estándar, muestra las n primeras líneas en la 
 * salida estándar recibidas por la entrada estándar.
 */
int head(int n){
	int i;
	char buffer[LINE_LENGTH];
	
	for(i=0;i<n;i++){
		fgets(buffer,LINE_LENGTH,stdin);
		printf("%s",buffer);
	}
	return 0;
}

/* Lectura de la entrada estándar, muestra las n últimas líneas en la
 * salida estándar recibidas por la entrada estándar.
 */ 
int tail(int n){
	int i;
	char buffer[LINE_LENGTH];
	
	//Es necesario crear una estructura de datos para guardar todas las lienas
	
	
	
	return 0;
}

/* Muestra las n líneas más largas recibidas de mayor a menor longitud,
 * o todas si hay menos de n líneas por la salida estándar recibidas
 * por la entrada estándar. 
 */
int longlines(int n){
	int i;
	char buffer[LINE_LENGTH];
	
	/*Es necesarios crear una estructura de datos para guardar las 
	 * lineas ordenadas por orden de longitud
	 * /
	
	
	
	return 0;
}
