/*
 ============================================================================
 Name        : EX7_C Source Code to Swap Two Numbers without temp variable
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this basic C programming exercises
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a =%.3f\n",a);
	printf("After swapping, value of b =%.3f",b);


	return 0;
}
