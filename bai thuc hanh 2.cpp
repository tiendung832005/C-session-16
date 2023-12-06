include<stdio.h>
int main(){
	FILE*taptin = NULL;
	int kytuHientai = 0;
	taptin = fopen("demo1.txt", "w");
	if(taptin != NULL){
		do{
			kytuHientai = fgetc(taptin);//doc ky tu
			printf("%c", kytuHientai);//In ky tu do ra man hinh	
				
		}while(kytuHientai != EOF);
		fclose(taptin);
	}
	return 0;
}
