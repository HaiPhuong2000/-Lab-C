#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	FILE *fp;
	char fileName[100],content[100];
	printf("Enter the file name to save content: ");
	scanf("%99[^\n]",fileName);
	printf("Enter content: ");
	fflush(stdin);
	scanf("%99[^\n]",content);
	fp=fopen(fileName,"a");
	fputs(content,fp);
	fclose(fp);
	fp=fopen(fileName,"r");
	if(fp==NULL){
		printf("File not found.");
		return 0;
	}else{
		printf("\nFile content:\n");
		char a;
		do {
	      a = fgetc(fp);
	      printf("%c",a);
	   } while (a != EOF);//EOF ki tu ket thuc file(End of file)
	}
	
	fclose(fp);
	
	
  
  
  
  
  return 0;
}

