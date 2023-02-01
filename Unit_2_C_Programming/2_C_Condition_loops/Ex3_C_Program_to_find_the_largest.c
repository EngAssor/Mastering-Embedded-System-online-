#include<stdio.h>
int main(void)
{
	float x ,y,z;
	printf("Enter three Numbers");
	scanf("%f",&x);
	scanf("%f",&y);
	scanf("%f",&z);
	if(x>=y && x>=z)
	{
		printf("Largest number is %f",x);
	}
	else if (y>=x && y>=z)
	{
		printf("Largest number is %f",y);
	}
	else
	{
		printf("Largest number is %f",z);
	}

}