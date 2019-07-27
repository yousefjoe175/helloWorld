#include<stdio.h>
#include<string.h>
#include"STD.c"
typedef struct {
	u32 ID;
	f32 salary;
	u8 name[50];
}Embloyee;
typedef union{
	u8 ID ;
	u8 age;
}embloyee;

void main(void){
	embloyee ahmed;
	ahmed.ID=5;
	printf("ahmed's ID= %d\n",ahmed.ID);
	ahmed.age=22;
	printf("ahmed's age= %d\n",ahmed.age);
Embloyee Ahmed = {123, 1200};
Embloyee *ptr = &Ahmed;
strcpy(Ahmed.name, "Ahmed");
printf("%.2f\n",ptr->salary);
printf(Ahmed.name);

}
