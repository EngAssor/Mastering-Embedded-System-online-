/*
 ============================================================================
 Name        : Ex2_C_Program_To_Calculate_Average_using_Array
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Array & String  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n ,i;
	printf("Enter the number of data :");
	scanf("%d",&n);
	float sum=0,a[50];
	for(i=0;i<n;i++)
	{	
		printf("Enter the number : ");
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("Average = %.2f",sum/n);
	
	
	return 0;
}
