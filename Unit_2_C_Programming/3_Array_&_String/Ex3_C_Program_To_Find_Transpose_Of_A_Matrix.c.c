/*
 ============================================================================
 Name        : EX3_C_Program_To_Find_Transpose_Of_A_Matrix.
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Array & String  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[50][50] ,t[50][50],r,c;
	printf("Enter the rows & columns number ");
	scanf("%d",&r);
	scanf("%d",&c);
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a%d%d :",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<c;i++)
	{
		printf("\n");
		for(j=0;j<r;j++)
		{
			t[i][j]=a[j][i];
			printf("%d     ",t[i][j]);
		}
	}
	
	return 0;
}
