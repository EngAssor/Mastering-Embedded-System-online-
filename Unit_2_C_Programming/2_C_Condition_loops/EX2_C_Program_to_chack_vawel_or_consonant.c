#include<stdio.h> 
  
int main()  
{  char ch ;
      printf("Enter an alpahabet :");
	  scanf("%c",&ch);
	  if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'u'||ch == 'o')
	  {
		  printf("%c is a vowel",ch);
	  }
	  else {
		  printf("%c is consonant",ch);
	  }
	  
    return 0;  
}  
