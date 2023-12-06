#include<stdio.h>



int main(){
	FILE *filePointer;
	char buffer[] = "abcdexyz";
	
	// Su dung ham fopen de mo tep tin
	filePointer = fopen("C:\\Users\\hi\\Desktop//bt01.txt", "r");
	
	fread(buffer, sizeof(char), sizeof(buffer), filePointer);
	
	printf("Noi dung trong file bt01 la: %s", buffer);
	
	fclose(filePointer);
	
	return 0;
}
