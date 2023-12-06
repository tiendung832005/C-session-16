#include<stdio.h>
int main(){
	FILE *taptin = NULL;
	const int maxNumbers = 1000;
	char arr[]="ahihi ahuhu";
	taptin = fopen("demo3.txt", "r");
	if(taptin != NULL){
		fgets(arr, maxNumbers, taptin);
		printf("%s", arr);
		fclose(taptin);
	}
	return 0;
	}
