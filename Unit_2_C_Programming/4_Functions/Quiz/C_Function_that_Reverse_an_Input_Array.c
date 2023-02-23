/*
 ============================================================================
 Name        : C_Function_that_Reverse_an_Input_Array.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this functions  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// functions prototype
void Scan_Array(int *a,int len);
void Print_Array(int *a,int len);
void Revers_Array(int *a,int *r,int len);
int  main ()
{
int arr1[10];
int arr2[10];
int len =0;
printf("Enter the length of the array :");
scanf("%d",&len);
Scan_Array(arr1,len);
Print_Array(arr1,len);
Revers_Array(arr1,arr2,len);
Print_Array(arr2,len);
return 0;
}


void Scan_Array(int *a,int len)
{
	printf("Enter the array elements :");
for(int i =0;i<len;i++)
{
    scanf("%d",&a[i]);
}

}
void Print_Array(int *a,int len)
{
    for(int i=0;i<len;i++)
    {
        printf("%d",a[i]);
        if(i<len-1)
        	printf(", ");
    }
    printf("\n");
}
void Revers_Array(int *a,int *r,int len)
{

for(int i=0 ,j=len-1;i<len;i++,j--)
{
   r[i]=a[j];
}
}
