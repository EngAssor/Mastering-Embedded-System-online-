/*
 ============================================================================
 Name        : C_Program_to_Add_Two_Complex_Numbers_by_Passing_Structure_to_a_Function
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Structure C programming   exercisess
 ============================================================================
 */
#include<stdio.h>

struct complex {
float real;
float imagi;
};
struct complex n1,n2;
void sum(struct complex n1,struct complex n2)
{
printf("sum =%.1f+%.1fi",n1.real+n2.real,n1.imagi+n2.imagi);
}
int main()
{
printf("Enter the 1st complex number real and imaginary respectively: ");
scanf("%f %f",&n1.real,&n1.imagi);
printf("Enter the 2nd complex number real and imaginary respectively: ");
scanf("%f %f",&n2.real,&n2.imagi);
sum(n1,n2);
printf("sum =%.1f+%.1fi",n1.real+n2.real,n1.imagi+n2.imagi);
    return 0;
}
