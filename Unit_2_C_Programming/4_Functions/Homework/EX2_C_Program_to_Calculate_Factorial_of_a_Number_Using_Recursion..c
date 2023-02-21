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
int Get_Fact(int x); // function prototype
int main(void) {
	int num; // the number to get factorial
	printf("Enter a positive Intger :");// message to user
	scanf("%d",&num); // scanning the number
	printf("factorial of %d = %d",num,Get_Fact(num));// printing the factorial
	return 0;
}
int Get_Fact(int x) // function body
{
	int fact=x;
	if(x==1) // checking the end of recursion
		return 1;
	return fact * Get_Fact(--x);// using recursion to get factorial
}

