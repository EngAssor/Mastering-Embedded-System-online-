//c function to reverse words in string
#include<stdio.h>
#include<string.h>
int main()
{
char s2[100];// array to stor reversd words
char s1[100]=" ";// the arry to be reversed
char gletch[100];// input

printf("Enter the string:");// message to user
gets(gletch);// get string from user
strcat(s1,gletch);//make string start with space
int s1_i=strlen(s1) ,s2_i=0;/* s1_i pointer to where in input strin at first it = string length ,
 s2_i point where we in string 2
 */
int i,j;// loop vriables
for(i=s1_i-1;i>=0;i--)// out loop it loops on hole sterng
{
    if(s1[i]==' ')// we will loop until find the space then we will copy the what before it
    {
        for(j=i+1;j<=s1_i;j++)// inner loop that copy what before the space to s2
        {
            s2[s2_i]=s1[j];
            s2_i++;
        }
        s1_i=i;


    }

}
// print string after revers it
for(i=0;i<strlen(s1);i++)
printf("%c",s2[i]);

  return 0;
}
