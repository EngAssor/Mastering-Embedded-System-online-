/*
 ============================================================================
 Name        : EX5_C_Program_to_Find_Area_of_a_circle_by_Passing_Arguments_to_Macros
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Structure C programming   exercises
 ============================================================================
 */
#include<stdio.h>
#define pi 3.1415
float Get_Area_of_a_circle(float radius);
int main()
{
float radius=0;
printf("Enter the radius of the circle to calculate area :");
scanf("%f",&radius);
printf("Area = %.2f",Get_Area_of_a_circle(radius));
    return 0;

}
float Get_Area_of_a_circle(float radius)
{
    return(pi * radius * radius);
}
