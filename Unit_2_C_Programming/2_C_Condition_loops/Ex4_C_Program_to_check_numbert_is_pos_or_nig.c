#include<stdio.h>
int main(void)
{
	float x ;
	printf("Enter a number : ");
	scanf("%f",&x);
	if (x > 0)
	{
		printf("%f is positive",x);
	}
	else if (x <0)
	{
		printf("%f is negative",x);
	}
	else
	{
		printf("You entered Zero");
	}
	return 0 ;
}
