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
#include<string.h>
void Scan_Array(int *a,int len);

int  main ()
{
    int num;
    int arr[7];
    Scan_Array(arr,7);
    printf("Enter the number to find:");
    scanf("%d",&num);
    int i ,key ;
    for(i=0;i<7;i++)
    {
        if(arr[i]==num)
           {
                key=i;
           }
        else if(i==7)
          {
                key =-1;
          }
            else
        {

        }

    }
    printf("result =%d",key);
}


void Scan_Array(int *a,int len)
{
	printf("Enter the array elements :");
for(int i =0;i<len;i++)
{
    scanf("%d",&a[i]);
}

}



