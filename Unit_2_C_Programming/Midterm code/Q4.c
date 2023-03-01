#include<stdio.h>
int revers(int x);
int main()
{
    while(1)// super loop to get more than one input
    {

    int n =0;// input variable
    printf("Enter the number to revers :");//message to user
    scanf("%d",&n);// scan the input
printf("%d\n",revers(n));// call revers fun and print it
    }
    return 0;

}
int revers(int x)// function body @arg integer number
{
    int rev_num=0;
    int mod;// modulo variable  
    while(x) // loop until x =0
    {
        mod =x%10;// get the reminder of x
        rev_num+=mod;
        if(x/10!=0) // check if it the last digit 
            {rev_num*=10;}
    x/=10; 
    }
    return rev_num;
}
