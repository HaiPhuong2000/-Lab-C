#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
FILE *fp;
char fileName[100],content[100];

void func1(){
	printf("Enter the file name to save content: ");
	scanf("%99[^\n]",fileName);
}

void func2(){
	printf("Enter content: ");
	fflush(stdin);
	scanf("%99[^\n]",content);
	fp=fopen(fileName,"a");
	fputs(content,fp);
	fclose(fp);
}

void func3(){
	fp=fopen(fileName,"r");
	if(fp==NULL){
		printf("File not found.");
		return ;
	}else{
		printf("\nFile content:\n");
		char a;
		do {
	      a = fgetc(fp);
	      printf("%c",a);//In tung ki tu trong file
	   } while (a != EOF);//EOF ki tu ket thuc file(End of file)
	}
	
	fclose(fp);
}

int main() {
	
	func1();
	func2();
	func3();
  
  
  return 0;
}

