/*Write a C program takes string from the user and check if it the same USERNAME or not*/
/*
 ============================================================================
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
void Scan_Array(int *a,int len);

int  main ()
{
    char username[10]="aser abdo";
        char in [10];
    printf("Enter the user name :");
    gets(in);
    int x =strcmp(username,in);
    if(x==0)
        printf("it is the same user name");
    else
        printf("it is not the same");
}


