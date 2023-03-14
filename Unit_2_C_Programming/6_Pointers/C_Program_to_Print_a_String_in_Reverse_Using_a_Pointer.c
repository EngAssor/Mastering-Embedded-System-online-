#include <stdio.h>
#include<string.h>
/*
 ============================================================================
 Name        : C_Program_to_Print_a_String_in_Reverse_Using_a_Pointer.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this pointer C programming   exercises
 ============================================================================
 */
 int main()
 {
	 char a[50];
	 printf("Enter the string: ");
	 gets(a);
	 char *pc=&a;
	 int i =strlen(a)-1;
	 for(;i>=0;i--)
	 {
		 printf("%c",*(pc+i));
	 }
	 return 0;
 }