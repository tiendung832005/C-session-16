#include<stdio.h>
int main(){
	FILE*taptin = NULL;
	taptin = fopen("demo1.txt", "w");
	if(taptin != NULL){
		fputc("abcdxyz", taptin); 
		fclose(taptin);
	}
	return 0;
}
