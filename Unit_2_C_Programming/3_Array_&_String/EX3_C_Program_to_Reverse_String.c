/*
 ============================================================================
 Name        : EX3_C_Program_to_Reverse_String.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Array & String  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s [50];
	int len=0,i=0;
	printf("Enter the string :");
	gets(s);
	while(s[i]!=0)
	{
		len++;
		i++;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",s[i]);
	}
	return 0;
}
