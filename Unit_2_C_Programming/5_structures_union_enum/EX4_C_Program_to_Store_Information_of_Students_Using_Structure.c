/*
 ============================================================================
 Name        : EX4_C_Program_to_Store_Information_of_Students_Using_Structure
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this Structure C programming   exercisess
 ============================================================================
 */
#include<stdio.h>
//C_Program_to_Store_Information_of_a_Student_Using_Structure.c
struct Sstudent{// define student struct
char name[50];// defin name array of 50
int roll; // defin roll variable
float marks; // defin marks variable
};
struct Sstudent s[10]; //declear s struct of student
int main()
{
    int i;
     printf("Enter information of student  :");
    for(i=0;i<10;i++)
    {
         printf("\nfor Froll number :");
    scanf("%d",&s[i].roll);// sacn the roll
   printf(" Enter name:");
    scanf("%sto",s[i].name); // scan name of the student
     printf("Enter marks :");
    scanf("%f",&s[i].marks);// scan the mark
    }
    for(i=0;i<10;i++)
    {
printf("\nDisplaying information :\nname: %s.\nRoll:%d\nMarks:%.2f",s[i].name,s[i].roll,s[i].marks); //print all student information
    }
   return 0;
}


