/*
 ============================================================================
 Name        : Ex4_C_Program_To_Insert_An_Element_in_a_Array.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Array & String  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50];
	int n ,i ,s;
	printf("Enter the numbr of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=(i+1)+((1+i)*10);
		printf("%d ",a[i]);
	}
	
	printf("\nEnter the element to be searched : ");
	scanf("%d",&s);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("number found at location : %d",i+1);
			break;
			
		}
		
	}
	if(i==n)
	{
		printf("Not found");
	}
	return 0;
}
