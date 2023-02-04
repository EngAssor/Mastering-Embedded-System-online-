/*
 ============================================================================
 Name        : Ex1_C_Program_To_Find_The_Frequency_Of_Characters.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Array & String  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char s [50],c;
	int count=0;
	printf("Enter the string :");
	gets(s);
	printf("Enter a character to find frequency : ");
	scanf("%c",&c);
	int i =0;
	while(s[i]!=0)
	{
		if(s[i]==c)
			count++;
		i++;
	}
	printf("Frequency of %c is :%d",c,count);
	return 0;
}
