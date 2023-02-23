/*C program to convert ascii to integer (atoi() implementation)
 ============================================================================
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 ============================================================================
 */



#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
int convert(char * s);
int  main ()
{
    char x[10] ="6201";
    int y=convert(x);
    printf("%d",y);

   return 0;
}
int convert(char *s)
{
        int len =strlen(s);
        int i,digit;
        int res=0;

        for(i=0;i<len;i++)
        {
            digit =(s[i]-0x30);
            res=(res*10)+digit;

        }
        return res;
}

