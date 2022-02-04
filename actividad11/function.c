#include <stdio.h>
#include "function.h"

void parells(){
	int llistaParells[SIZE], j=1;

	for (int i=0; i<SIZE;i++){
		if (j%2==0){
			llistaParells[i] = j;
		}else{
			i--;
		}
		j++;
	}
	mostrar(llistaParells);
}

void mostrar(int *llista){
	for (int i = 0; i<SIZE; i++){
		printf("%d ", llista[i]);
	}
}
