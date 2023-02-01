#include<stdio.h>
int main(void)
{
unsigned int x , sum ;
printf("Enter an integer : ");
scanf("%u",&x);
int i ;
for (i=1,sum=0;i<=x;i++)
{
	sum +=i;
}
printf("Sum = %u",sum);
	return 0 ;
}  