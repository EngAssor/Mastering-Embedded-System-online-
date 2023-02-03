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
	int n ,i ,in,loc;
	printf("Enter the numbr of elements :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		a[i]=i+1;
		printf("%d ",a[i]);
	}
	printf("\nEnter the element to be insreted : ");
	scanf("%d",&in);
	printf("Enter the location: ");
	scanf("%d",&loc);
	for(i=(n-1);i>=(loc-1);i--)
	{
		a[i+1]=a[i];
	}
	a[loc-1] = in;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
}
