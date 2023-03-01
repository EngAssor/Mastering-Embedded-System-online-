/*
author : Asser Tanatwy.
Q2 in midterm

c function to take an integer number and calculate it's square root?

                                             test case 1:  input:4 ->output:2.000
                                            test case 2:   input:10 ->output:3.126                                                                                                                */

#include<stdio.h>
#include<math.h>
int main()
{
    float input;//input variable
while(1) // super loop to get more than input
{
    printf("Enter the number");
    scanf("%f",&input);// scan the input
    printf("square root of %.3f is :%.3f \n",input,sqrt(input));// call sqrt fun to get the square root
}
   return 0;
}


