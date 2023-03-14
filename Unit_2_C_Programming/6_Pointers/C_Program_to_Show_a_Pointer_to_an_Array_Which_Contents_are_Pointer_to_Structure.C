
#include <stdio.h>
/*
 ============================================================================
 Name        : C_Program_to_Show_a_Pointer_to_an_Array_Which_Contents_are_Pointer_to_Structure.c
 Author      : Asser Tantawy
 Version     : 0.0
 Copyright   : Your copyright notice
 Description : this pointer C programming   exercises
 ============================================================================
 */
struct SEmp
{
	char name[10];
	int id;
};
 int main()
 {
     struct SEmp e1 ={"Asser",1999};
     struct SEmp e2={"Tantawy",2000};

	 struct SEmp * arr[2]={&e1,&e2};

	 struct SEmp *  ((* p_arr_p_struc)[2]);
	 p_arr_p_struc=&arr;
    printf("Exmployee Name : %s\n",(*(*p_arr_p_struc))->name);
    printf("Employee ID : %d",(*(*p_arr_p_struc))->id);

	return 0;
 }
