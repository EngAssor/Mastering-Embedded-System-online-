#include<stdio.h>
int main(void)
{
 int x , fact ;
printf("Enter an integer : ");
scanf("%d",&x);
if(x>=0){
int i ;
fact=x;
for (i=x-1;i>0;i--)
{
	fact*=i;
}
printf("factorial = %u",fact);
}
else
{
	printf("Error !!! factorial of negative number doesn't exist");
}
	return 0 ;
}  