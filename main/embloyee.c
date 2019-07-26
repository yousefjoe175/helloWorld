#include<stdio.h>
#include<string.h>
#include"STD.c"
typedef struct {
	u32 ID;
	f32 salary;
	u8 name[50];
}Embloyee;
void main(void){
 Embloyee Ahmed = {123, 1200};
Embloyee *ptr = &Ahmed;
strcpy(Ahmed.name, "Ahmed");
printf("%.2f\n",ptr->salary);
printf(Ahmed.name);
}