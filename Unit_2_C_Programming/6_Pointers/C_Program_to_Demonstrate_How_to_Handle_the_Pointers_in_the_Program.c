#include <stdio.h>
/**/
/*
 ============================================================================
 Name        : Write a program in C to demonstrate how to handle the pointers in the program
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this pointer C programming   exercises
 ============================================================================
 */
int main()
{
	int m ;
	int *pm ,*ab;
	m=29;
	pm=&m;
	printf("Address of m :%x\n",pm);
	printf("Value of m :%d\n",*pm);
	ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab :%x\n",ab);
	printf("Content of pointer ab :%d\n",*ab);
	*ab=34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab :%x\n",ab);
	printf("Content of pointer ab :%d\n",*ab);
	*ab=7;
	printf("The pointer variable ab is assigned with the value 7 now\n");
		printf("Address of m :%x\n",&m);
	printf("Value of m :%d\n",m);
	
	return 0;
	
}