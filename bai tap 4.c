#include<stdio.h>
int main(){
	FILE* taptin = NULL;
	char arr[1000];
	taptin=fopen("C:\\Users\\hi\\Desktop\\bt3.txt", "r");
	if(taptin!=NULL){
		fread(arr,sizeof(char),sizeof(arr),taptin);
		printf("%s",arr);
		fclose(taptin);
	}
}
