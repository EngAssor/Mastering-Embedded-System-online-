//C_Program_for_Swapping_2_Arrays_with_Different_Lenghts.c
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int swap_Arr(int * arr1,int * arr2);
void Print_Array(int *a,int len);
void Scan_Array(int *a,int len);

int  main ()
{
int arr1[100];
int arr2[100];
int n,m;
printf("Enter the first  array length :");
scanf("%d",&n);
Scan_Array(arr1,n);
printf("Enter the second  array length :");
scanf("%d",&m);
Scan_Array(arr2,m);
printf("before swapping   arr1 :");
Print_Array(arr1,n);
printf("before swapping   arr2 :");
Print_Array(arr2,m);
swap_Arr(arr1,arr2);
printf("after swapping   arr1 :");
Print_Array(arr1,m);
printf("after swapping   arr2 :");
Print_Array(arr2,n);




   return 0;
}
int swap_Arr(int * arr1,int * arr2)
{
    int temp[100];
    int i;
    for(i=0;i<100;i++)
    {
        temp[i]=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=temp[i];
    }

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
