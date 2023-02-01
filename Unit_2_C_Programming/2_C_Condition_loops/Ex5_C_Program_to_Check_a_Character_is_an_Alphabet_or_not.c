#include<stdio.h>
int main(void)
{
char x ;
printf("Enter a character : ");
scanf("%c",&x);
if (( (x>=65) &&(x<=90) )||( (x>=97) &&(x<=122) ))
{
	printf("%c is an alphapet",x);
}
else
{
		printf("%c Not an alphapet",x);

}
	return 0 ;
}