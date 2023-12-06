#include<stdio.h>
int main(){
	char arr[100];
	FILE *taptin1, *taptin2, *taptin3;
	taptin1=fopen("C:\\Users\\hi\\Desktop\\bt3.txt", "r");
	taptin2=fopen("C:\\Users\\hi\\Desktop\\bt3.txt", "r");
	taptin3=fopen("bt5.txt", "w+");
	int n=2;
		for(int i=1;i<=n;i++){
			if(i==1){
				fread(arr, sizeof(char), sizeof(arr), taptin1);
		        fprintf(taptin3,"%s\n",arr);
		        fclose(taptin1);
			}
			if(i==2){
				fread(arr, sizeof(char), sizeof(arr), taptin2);
				fprintf(taptin3,"%s\n",arr);
		        fclose(taptin2);
			}
		}
		fclose(taptin3);
}
