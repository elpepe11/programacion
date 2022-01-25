/*
 * function.c
 *
 *  Created on: 25 ene 2022
 *      Author: sharon
 */
int ocho(int numero, int potencia){

	  long resultado=numero;
	  while(potencia >1){
	        resultado = resultado * numero;
	        potencia --;
	    }
	    printf("%ld", resultado);

}


