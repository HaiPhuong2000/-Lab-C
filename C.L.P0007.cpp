#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
int checkInput(int min, int max){
	int check;
	int num;
	char c;
	do{
	check=scanf("%d%c", &num, &c);
	if((c != ' ' && c!= '\n' )|| num < min || num > max){
		printf("The number you enter must in 0-5\n");
		check =0;
	}else{
		check =1;
	}
	
}while (check == 0);
return num;
}
int main(){
	printf("Welcome to MasterMind!!!");
	printf("\n\nAt each turn, you will enter your guess for the playing board.");
	printf("\nA valid has 4 values in between 0 and 5.");
	printf("\nEach guess will have each number within the guess separated by space.");
	printf("\nWhen you are ready, enter your first guess.");
	printf("\nFrom that point on, you will be told how many perfect and imperfect matches you have.");
	printf("\nAfter this message, you should guess again. You have 10 chances, good luck!\n\n");
	srand(time(NULL));
	int a[4], b[4], c[4];
	int i,j, perfect, imperfect, turn =1;
	clock_t start_t, end_t;
	for(i =0; i <4; i++){
		a[i] = rand()%6; //create 4 random number
	}
	for(i =0; i<4; i++){ //print 4 number
		printf("%4d", a[i]);
	}
	printf("\n");
	start_t=clock();
	while(turn <=10){
		for(i =0; i<4; i++)
			c[i] = a[i];
	  	perfect=0;imperfect=0;			
		for(i =0; i<4;i++){
			b[i] = checkInput(0, 5);
		}
		for(i =0; i<4; i++){
			if(c[i] == b[i]){
				perfect++;
				c[i] =-1;
				b[i]=-1;
			}
		}
		for(i=0; i<4; i++){
			for(j=0; j<4; j++){
				if(c[i]==b[i]&& c[i] !=-1){
					imperfect++;
					c[i]=-1;
					b[i]=-1;
				}
			}
		}
		 printf("You have %d perfect matches and %d imperfect matches.\n",perfect,imperfect);
		 if(perfect==4){
		 	end_t=clock();
		 	long minute = (end_t-start_t) / (60*CLOCKS_PER_SEC);
		 	long second = ((end_t-start_t) -minute*(60*CLOCKS_PER_SEC))/ CLOCKS_PER_SEC;
		 	printf("You have won the game in %d turn and %ld:%ld!!!",turn,minute,second);
		 	return 0;
		 }
		 turn++;
	}
		printf("Sorry you have exceeded the maximum number of future. You lose.");
  	printf("\nHere is the winning board: ");
  	
	for(i=0;i<4;i++){
  		printf("%d ",a[i]);
	}
	return 0;
}
