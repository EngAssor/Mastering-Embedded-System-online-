/*
 ============================================================================
 Name        : program in C to print all the alphabets using a pointer.
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this pointer C programming   exercises
 ============================================================================
 */
 #include<stdio.h>
 int main()
 {
	 char c ='A';
	 char * pc=NULL;
	 pc=&c;
	 while(*pc!='[')// print till Z
	 {
		 printf("%c \t",*pc);
		 c++;
	 }
	 return 0;
 }