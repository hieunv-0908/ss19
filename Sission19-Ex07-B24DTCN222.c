#include<stdio.h>
typedef struct {
	int id;
	char name[100];
	int age;
	char phoneNumber[100];
	
}Student;

void deleteStudent(Student student[],int *len);


int main(){
int len =5;
Student students[5]={

{1,"nguyen van long",18,"0239182732"},
{2,"nguyen van trong",18,"0293487823"},
{3,"nguyen van manh",18,"0293849283"},
{4,"nguyen thi minh",18,"0293849238"},
{5,"nguyen van chien",18,"0293482934"},

};
deleteStudent (students,&len);
for(int i=0;i<len;i++){
		printf("%d.",students[i].id);
		printf("%s.",students[i].name);
		printf("%d.",students[i].age);
		printf("%s.",students[i].phoneNumber);
		printf("____________\n");
	}
}

void deleteStudent(Student student[],int *len){
	for(int i=0;i<*len;i++){
		printf("%d.",student[i].id);
		printf("%s.",student[i].name);
		printf("%d.",student[i].age);
		printf("%s.\n",student[i].phoneNumber);
		printf("____________\n");
	}
		if(student[0].id >0){
			printf("Mang co phan tu\n");
		}else{
			printf("Mng khong co phan tu\n");
			return;
		}
		printf("Moi ban nhap vao vi tri sinh vien muon xoa:");
		int deleteIndex;
		scanf("%d",&deleteIndex);
		for(int i=deleteIndex;i<*len;i++){
			student[i]=student[i+1];
		}
		for(int i=deleteIndex;i<*len;i++){
			student[i].id-=1;
		}
		(*len)--;
}


