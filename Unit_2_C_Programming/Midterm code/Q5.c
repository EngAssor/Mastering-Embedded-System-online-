#include<stdio.h>
//c function to count number of ones in binary number
int get_bit(int x);

int main()
{
    while(1)
    {
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    int ones=0;
    while(n)
    {
        if(get_bit(n))
            ones++;
        n=n>>1;
    }
    printf("number pf ones is %d\n",ones);
    }
    return 0;
}
int get_bit(int x)
{
return (1&x);
}
