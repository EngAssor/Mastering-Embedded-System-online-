#include<stdio.h>
int main(void)
{
char op ;
float x ,y;
printf("Enter operator either + or - or * or / : ");
scanf("%c",&op);
printf("Enter two operands: ");
scanf("%f",&x);
scanf("%f",&y);
switch(op)
{
	case '+':
	printf("%f + %f = %f",x,y,x+y);
	break;
	case '-':
	printf("%f - %f = %f",x,y,x-y);
	break;
	case '*':
	printf("%f * %f = %f",x,y,x*y);
	break;
	case '/':
	printf("%f / %f = %f",x,y,x/y);
	break;
	default:
	printf("wrong choice");
	break;
}

	return 0 ;
}  