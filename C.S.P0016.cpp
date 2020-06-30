#include<stdio.h>
int main(){
int month =0;
double mortgage;
double percent;
double payment;
printf("What is the value left on the mortgage?\n");
scanf("%lf", &mortgage);
printf("What is the annual interest rate of the loan, in percent?\n");
scanf("%lf", &percent);
printf("What is the monthly payment?\n");
scanf("%lf", &payment);
percent /=12;
printf("Month\tPayment  Amount Owed\n");
  	do{
  		mortgage=mortgage+mortgage*percent/100;//tinh lai xuat
  		if(mortgage>payment){
  			mortgage=mortgage-payment;
		}else{
			payment=mortgage;
			mortgage=0;
		}
		month++;
		printf("%d\t%0.2lf  %0.2lf\n",month,payment,mortgage);	
	}while(mortgage!=0);
	return 0;
}
