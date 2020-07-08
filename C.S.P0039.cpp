#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int leapYearCheck(int n){
	if(n%400 == 0 || n%4==0&&n%100!=0){
	return 1;
}
	return 0;
}
int inputCheck(char msg[], char error[], int min, int max){
	int check, num;
	char c;
	do{
		printf("%s",msg);
		check=scanf("%d%c", &num, &c);//Returns the value of an integer
		fflush(stdin);
        if(check!=2||c != '\n' || num<min || num>max){
            printf("%s",error);
            fflush(stdin);//Delete buffer
            check=0; //input is a character
        }
        else{
            check=1; //input is a number
        }
    }while(check==0);
    return num;
	
}
void charCheck(char *c1,char *c2){
	char enter;
	int check;
	do{
		check=scanf("%c%c%c", c1, c2,&enter);//Returns the value of an integer
        if(enter != '\n'||check!=3 ){
            printf("try again!!\nEnter 2 character: ");
            fflush(stdin);//Delete buffer
            check=0; //input invalid
        }
        else{
            check=1; //input valid
        }
    }while(check==0);
	
}
void menuOption(){
	int option;
	while(true){
		printf("1- Processing date data\n");
		printf("2- Character data\n");
		printf("3- quit\n");
		option =inputCheck("\nEnter your choice: ", "option (1-3). Try again\n", 1, 3);
		
		if(option == 1){
			int day, month, year;
			day = inputCheck("Enter day: ", "day (1-31). Try again\n", 1, 31);
			month = inputCheck("Enter month: ", "month (1-12). Try again\n", 1, 12);
			year = inputCheck("Enter year: ", "year(1-9999). Try again\n", 1, 9999);
			
			if(month == 1 || month == 3 || month ==5 || month == 7 || month == 8 || month == 10 || month ==12){
				if(day<=31){
					printf("%d-%d-%d\n", day, month, year);
				}
				else{
					printf("\nDay, month, year you entered invalid\n");
				}
			}
			else if(month == 2){
				if(day <=29){
					printf("%d-%d-%d\n", day, month, year);
				}
				else{
					printf("\nDay, month, year you entered invalid\n");
				}
			}
			else{
				if(day <= 30){
					printf("%d-%d-%d\n", day, month, year);
				}
				else{
					printf("\nDay, month, year you entered invalid\n");
				}	
				
			}
						
		}
			if(option == 2){
		int i;
		char a, c;
		printf("\nEnter 2 character: ");
		charCheck(&a,&c);
		if(a < c){
			for(i =c; i >= a; i--){
				printf("%c:%d\n", i,i);
			}
		}
		else{
			for(i =a; i >= c; i--){
				printf("%c:%d\n",i,i);
			}
		}
	}
	if(option ==3){
		break;
	}
				
		}
	}

int main(){
	menuOption();
	return 0;
}



