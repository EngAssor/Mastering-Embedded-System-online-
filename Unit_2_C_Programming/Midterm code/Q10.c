#include<stdio.h>
//c function to count the max number of ones between two zeros
int get_bit(int x);

int main()
{
    while(1)
    {
    int n ;
    printf("Enter the number :");
    scanf("%d",&n);
    int max=0;
    int c=0;
    while(n)
{
        c=0;
        if(get_bit(n)==0)
        {
            while(1)
            {
                n=n>>1;
                if(get_bit(n)==0)
                    break;
                else
                    c++;
            }
            if(c>max)
            {
                max=c;
            }
        }
      n=n>>1;
    }
        printf("number of ones is %d\n",max);
    }
    return 0;
}
int get_bit(int x)
{
return (1&x);
}
