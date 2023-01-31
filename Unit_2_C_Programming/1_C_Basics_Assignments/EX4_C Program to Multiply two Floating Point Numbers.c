/*
 ============================================================================
 Name        : EX4_C Program to Multiply two Floating Point Numbers
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this basic C programming exercises
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x =0 ,y=0;
	printf("Enter two numbers:");
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Product:%.3f",x*y);
	
	return 0;
}
