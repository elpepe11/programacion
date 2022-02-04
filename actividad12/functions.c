/*
 * functions.c
 *
 *  Created on: 3 feb 2022
 *      Author: oalegre
 */
#include <stdio.h>
#include "functions.h"

int eleccion(){
	int num;
	do{
		printf("Define el tamaño del array:");
		scanf("%d",&num);
	}while(num<=1 && num>=50);
	poner(num);
}

int poner(int num){
	int relleno[num], i=0;
	printf("*************************************\n");

	for(i=0;i<num;i++){
		printf("Introduce un numero:");
		scanf("%d",&relleno[i]);
	}
	ordenar(relleno,num);

}
void mostrar(int *relleno, int num){
	printf("***********Los resultados son**********\n");
	for (int i=0;i<num;i++){
		printf("%d\t",relleno[i]);
	}

}

void ordenar(int *relleno,int num){
	 for (int i = 0; i < num-1; i++) {
	 	for(int j = i + 1; j < num; j++) {
	        	if (relleno[i] < relleno[j]) {
	        	int canvi = relleno[i];
	         	relleno[i] = relleno[j];
	         	relleno[j] = canvi;
	         	}
	 	}
	 }
	 mostrar(relleno,num);
}
