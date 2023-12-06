#include<stdio.h>
struct student{
	char name[50];
	int age;
	char phone[20];
	char email[40];
};
struct student students[100];
int main(){
	FILE* filePointer;
	filePointer=fopen("C:\\Users\\hi\\Desktop\\student.txt","w+");
	int n;
	printf("Nhap so luong sinh vien:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		fprintf(filePointer,"Sinh vien %d:\n",i);
		printf("name: ");
		scanf("%s",&students[i].name);
		fprintf(filePointer, "ho va ten: %s\n", students[i].name);
		printf("age: ");
		scanf("%d",&students[i].age);
		fprintf(filePointer, "tuoi: %s\n", students[i].age);
		printf("phone: ");
		scanf("%s",&students[i].phone);
		fprintf(filePointer, "sdt: %s\n", students[i].phone);
		printf("email: ");
		scanf("%s",&students[i].email);
		fprintf(filePointer, "email: %s\n", students[i].email);
	}
	fclose(filePointer);
}
