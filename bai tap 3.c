#include<stdio.h>
int main(){
	int n;
	FILE* taptin = NULL;
	char arr[1000];
	taptin=fopen("C:\\Users\\hi\\Desktop\\bt3.txt", "w");
	printf("Nhap so dong:");
	scanf("%d",&n);
	if(taptin!=NULL){
		for(int i=0;i<n;i++){
		    scanf("%s",arr);
		    fprintf(taptin,"%s\n",arr);
	    }
		fclose(taptin);
	}
}
