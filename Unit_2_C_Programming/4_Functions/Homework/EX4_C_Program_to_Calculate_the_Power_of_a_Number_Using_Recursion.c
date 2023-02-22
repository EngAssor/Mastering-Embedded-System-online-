/*
 ============================================================================
 Name        : EX4_C_Program_to_Calculate_the_Power_of_a_Number_Using_Recursion.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this functions  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
float power(float base , unsigned int pw); // function prototype
int main(void) {
	float base ;// baser number
	int pw;// power number
	printf("Enter base number: ");
	scanf("%f",&base);//getting baser number 
	printf("Enter power number(positive intger): ");
	scanf("%d",&pw);// getting power number
	printf("%.1f ^ %d = %.1f",x,p,power(x,p)); // printing the power

	return 0;
}
/*
this is a function to Calculate the Power Using Recursion  
@args 
- base is the base number
- pw the power  
*/
float power(float base , unsigned int pw)
{
	if(pw == 0)// the condition to end the recursion
		return 1;
	return base * power(base,--pw);
	
}