/*
 ============================================================================
 Name        : EX3_C_Program_to_Reverse_a_Sentence_Using_Recursion.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this functions  C programming   exercisess
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void revers(char * s,int len); // function prototype
int main(void) {
	char s[50]; // array of char to store the sentence
	printf("Enter a sentence :");
	gets(s);// scaning the sentence from user
	revers(s,strlen(s));// calling the function
	return 0;
}

void revers(char * s,int len)
{
	if(len >=0)// this condition to end the recursion
	{
	printf("%c",s[len-1]);//printing the lsat char in the array
	revers(s,--len);// using recursion to print the next char
	}//end of if block
	else
	return ;
	
}