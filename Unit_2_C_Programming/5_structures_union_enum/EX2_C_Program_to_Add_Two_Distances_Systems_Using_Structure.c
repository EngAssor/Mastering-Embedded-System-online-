/*
 ============================================================================
 Name        : C_Program_to_Add_Two_Distances_Systems_Using_Structure.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Structure C programming   exercisess
 ============================================================================
 */
#include<stdio.h>

struct SDistance {// defin distance struct
int feet;
float inch;
};
struct SDistance d1,d2;// declear two 
// get sum is a function that calculate the sum of two distance in feet and inch and return it as a struct
struct SDistance Get_sum(struct SDistance d1,struct SDistance d2)
{
    struct SDistance sum;
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>=12)// check if sum of two inch more than 12 the it will be extra feet
    {
        sum.feet++;
        sum.inch-=12;
    }
return sum;
}
int main()
{
printf("Enter the information for 1st distance \nEnter the feet : ");
scanf("%d",&d1.feet);
printf("Enter the inch");
scanf("%f",&d1.inch);
printf("Enter the information for 2nd distance \nEnter the feet : ");
scanf("%d",&d2.feet);
printf("Enter the inch");
scanf("%f",&d2.inch);
printf("the sum = %d\'-%.1f\"",Get_sum(d1,d2).feet,Get_sum(d1,d2).inch);
    return 0;
}
