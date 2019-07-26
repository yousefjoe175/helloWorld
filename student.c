#include<stdio.h>
#include<stdlib.h>
#include"STD.c"
typedef struct {
	u32 math;
	u32 language;
	u32 physics;
	u32 chemistry;
}Student;


void main(void){
	Student student[10];
	for(int i=0; i<10;i++){
		student[i].math= rand()%101;
		student[i].language= rand()%101;
		student[i].physics= rand()%101;
		student[i].chemistry= rand()%101;
	}
	printf("Enter student ID: ");
	int n;
	scanf("%d",&n);
	if(n<10 && n>-1){
		printf("Math grade: %d\n", student[n].math);
		printf("language grade: %d\n", student[n].language);
		printf("physic grade: %d\n", student[n].physics);
		printf("chemistry grade: %d\n", student[n].chemistry);
	}else
		printf("Student is not correct!");
}