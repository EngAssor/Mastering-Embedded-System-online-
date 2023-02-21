/*
 ============================================================================
 Name        : EX2_C_Program_to_Calculate_Factorial_of_a_Number_Using_Recursion..c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this functions  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Get_Fact(int x);
int main(void) {
	int num;
	printf("Enter a positive Intger :");
	scanf("%d",&num);
	printf("factorial of %d = %d",num,Get_Fact(num));
	return 0;
}
int Get_Fact(int x)
{
	int fact=x;
	if(x==1)
		return 1;
	return fact * Get_Fact(--x);
}

