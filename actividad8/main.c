/*
 * main.c
 *
 *  Created on: 25 ene 2022
 *      Author: sharon
 */

#include <stdio.h>
#include "function.h"
void main(){
    int numero=0, potencia=0;

    printf("Inntrodueix primer nombre");
    scanf("%d",&numero);
    printf("Inntrodueix segon nombre");
    scanf("%d",&potencia);

    ocho(numero,potencia);
}

