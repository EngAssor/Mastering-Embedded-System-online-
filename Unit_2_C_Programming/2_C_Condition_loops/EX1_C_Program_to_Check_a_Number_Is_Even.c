/*
 ============================================================================
 Name        :EX1_C_Program_to_Check_a_Number_Is_Even
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Loop&Condition C programming exercises
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x =0;
	printf("Enter the number : ");
	scanf("%d",&x);
	if (0==x%2)
	{
		printf("%d is even",x);
	}
	else
	{
		printf("%d is odd",x);
	}
	return 0;
}
