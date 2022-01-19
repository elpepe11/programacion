/*
 * main.c
 *
 *  Created on: 12 ene 2022
 *      Author: sharon
 */

#include <stdio.h>
#include "functions.h"

void main(){
	int s,min=60, h=3600, dies=86400;

	s=conversion(min,h,dies);

		dies=s/86400;
		s=s%86400;
		h=s/3600;
		s=s%3600;
		min=s/60;
		s=s%60;

	printf("Són %d dies, %d hores, %d minuts i %lu segons", dies, h, min, s);


}
