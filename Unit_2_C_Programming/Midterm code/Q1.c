/*
author : Asser Tanatwy.
Q1 in midterm

c function to take a number and sum all digits?
                                            test cases:
                                           input:123 ->output:6
                                           input:4565 >output:20
                                                                                                                */

#include<stdio.h>
int sum_All_digits(int digits);//function  prototype
int main()
{
    while(1)// super loop to get more than input
    {


    int input;// input variable
    printf("Enter the number :"); // message to user
    scanf("%d",&input);// scan the input
printf("the sum is : %d\n",sum_All_digits(input));// calling the function and printing th output
    }
   return 0;
}

int sum_All_digits(int digits)
{
    int re,sum =0;// reminder variable & sum
    while(digits)// looping until digits = 0
    {
        re=digits%10;// get the last number in the hole number
        sum+=re;// sum it 
        digits/=10;// drop the last number in the hole number
    }
    return sum;// return the sum
}
