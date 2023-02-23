#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*this a c program that clear a specific bit in a number*/
int  main ()
{
    int num,bit;
    printf("Input number :");
    scanf("%d",&num);
    printf("Bit position  :");
    scanf("%d",&bit);
    printf("result =%d",(num&(~(1<<bit))));

}