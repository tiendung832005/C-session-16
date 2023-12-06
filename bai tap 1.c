#include<stdio.h>



int main(){
	FILE *filePointer;
	char buffer[] = "abcdexyz";
	
	// Su dung ham fopen de mo tep tin
	filePointer = fopen("C:\\Users\\hi\\Desktop//bai tap 1.txt", "a");
	
	fwrite(buffer, sizeof(char), sizeof(buffer), filePointer);
	
	fclose(filePointer);
	
	return 0;
}
