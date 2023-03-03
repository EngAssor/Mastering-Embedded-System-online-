/*
 ============================================================================
 Name        : C_Program_to_Store_Information_of_a_Student_Using_Structure.c
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
struct Sstudent s; //declear s struct of student
int main()
{
    printf("Enter information of student  :\n Enter name:");
    gets(s.name); // scan name of the student
    printf("Enter roll number :");
    scanf("%d",&s.roll);// sacn the roll
     printf("Enter marks :");
    scanf("%f",&s.marks);// scan the mark
printf("\nDisplaying information :\nname: %s.\nRoll:%d\nMarks:%.2f",s.name,s.roll,s.marks); //print all student information
    return 0;
}


