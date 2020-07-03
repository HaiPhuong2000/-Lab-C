#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int STRLEN_2(char s[]){
	int i=0;
	while(s[i]!='\0')
		i++;
	printf("%d", i);
	return (i);

}
void STRCAT_2(char *s1, char *s2){
	int i=0,j=0;
	while(s1[i]!='\0'){
		i++;
	}
	while(s2[j]!='\0'){
		s1[i++]=s2[j++];
	}
	s1[i]='\0';
}

int STRCMP_2(char s1[], char s2[]){
	int length_1=STRLEN_2(s1);
	int length_2=STRLEN_2(s2);
	int lengthMin=(length_1<length_2) ? length_1 : length_2;
	int i;
	for(i=0;i<lengthMin;i++){
		if(s1[i]<s2[i])
			 return -1;
		else if(s1[i]>s2[i])
				return 1;
	}
	if(length_1>length_2)
		return 1;
	else if(length_1<length_2)
			return -1;
	return 0;
}
void STRCPY_2(char s1[],char s2[]){
	int i=0;
	while(s2[i]!='\0')
		s1[i]=s2[i++];
	s1[i]='\0';
}
void STRNCPY_2(char s1[], char s2[],int n){
	int i;
	for(i=0;i<n;i++){
		s1[i]=s2[i];
	}
	s1[i]='\0';
}

void STRSET_2(char s1[],char c,int n){
	int i;
	if(n>STRLEN_2(s1))
		n=STRLEN_2(s1);
	for(i=0;i<n;i++){
		s1[i]=c;
	}
}

int STRSTR_2(char s1[],char s2[]){
	int length1=STRLEN_2(s1);
	int length2=STRLEN_2(s2);
	int i,j;
	for(i=0;i<length1;i++){
		if(s1[i]==s2[0]){
			int temp=i;
			for(j=1;j<length2;j++){
				if(s1[++temp]!=s2[j]) return -1;
			}
			return i;
		}
	}
	return -1;
}

int STRCHR_2(char s[], char c){
	int i;
	for(i=0;i<STRLEN_2(s);i++){
		if(s[i]==c)
			return i;
	}
	return -1;
}


int main() {
	char s1[]="le hong quan";
	char s2[]="quan";
//	STRCAT_2(s1,s2);
//	printf("%s",s1); 
//	STRLEN_2(s2);
//  	STRCPY_2(s1, s2);
//  	printf("\n%s", s1);
//  	STRNCPY_2(s2, s1, 3);
////  	printf("%s", s2);
//STRSET_2(s2, 'o', 2);
//printf("%s", s2);
//  
  
  return 0;
}

