/*
 * function.c
 *
 *  Created on: 21 ene 2022
 *      Author: sharon
 */

int cambio(num1,num2){
	int aux=0;

	aux = num1;
	num1 = num2;
	num2 = aux;

	printf("Num 1 es %d", num1);
	printf("\nNum 2 es %d", num2);

}
