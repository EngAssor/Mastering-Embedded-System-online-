#include <stdio.h>
/*
 ============================================================================
 Name        : C_Program_to_Print_the_Elements_of_an_Array_in_reverse_order.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this pointer C programming   exercises
 ============================================================================
 */
 int main()
 {
	 int a[15];
	 int n ;
	 int *p_arr=&a;
	 printf("Input the number of elements to store in the array (max 15) : ");
	 scanf("%d",&n);
	 int i =0;
	 printf("Input %d number of elements in the array :\n",n);
	 for(i=0;i<n;i++)
	 {
		 printf("element -%d: ",i+1);
		 scanf("%d",p_arr+i);
	 }
	 printf("The elements of array in reverse order are :\n");
	 for(i=n-1;i>=0;i--)
	 {
		printf("element -%d:%d\n",i,*p_arr+i);
		
	 }
	 return 0;
 }