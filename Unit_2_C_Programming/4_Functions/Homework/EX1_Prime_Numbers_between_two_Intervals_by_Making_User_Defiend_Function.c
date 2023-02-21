/*
 ============================================================================
 Name        : EX1_Prime_Numbers_between_two_Intervals_by_Making_User_Defiend_Function.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this functions  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Print_Prime_Numbers(int a ,int b);// function prototype
int main(void) {
	int x,y; //Intervals Numbers 
	printf("Enter two numbers(Intervals) : ");// printing message to user
	scanf("%d",&x); // getting low interval
	
	scanf("%d",&y); // getting high interval
 Print_Prime_Numbers(x,y);// calling the function
	return 0;
}

void Print_Prime_Numbers(int a ,int b)
{
	
	int j =0; // outer loop pointer that point to the number we check if is it prime
	for(j=b;j>=a;j--)//outer loop
{
	
int i =0;// inner loop pointer
for(i=j-1;i>0;i-- )//inner loop
{
	if(i==1) // checking if we get to the end of loop then it's a prime number
	{
		printf("%d ",j);// printing the prime number
}
else
{
	
}
	if(j%i==0) //checking  if it's not a prime number
	{
	break; // exiting the inner loop
	}
	else
	{
		
	}
	

}//end of inner loop
	
}// end of outer loop
}// end of function