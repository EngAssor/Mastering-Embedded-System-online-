/*
 ============================================================================
 Name        : Ex1_C_Program_To_Find_Sum_Of_Two_Matrix
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Array & String  C programming   exercises
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int i,j;
	printf("Enter the elements of the 1st matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Enter the elements of the 2end matrix\n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	printf("Sum of Matrix :");
		for(i=0;i<=1;i++)
	{
		printf("\n");
		for(j=0;j<=1;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%.1f      ",sum[i][j]);
		}
	}
	
	return 0;
}
