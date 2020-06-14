#include<stdio.h>
#include<stdlib.h>
int addAValues(int Arr[], int size){
	printf("Input an Integer: ");
	for(int i =0; i<size; i++){
		scanf("%d", &Arr[i]);
	}
		printf("\n");
}
void searchAValue(int Arr[], int size){
	int temp=1;
	printf("Input an Integer: ");
	scanf("%d", &temp);
	for(int i =0; i< size; i++){
		if(Arr[i] == temp){
			printf("Index of integer: %d\n", i);
		}
	}
		printf("\n");
}
void display(int Arr[], int size){
	printf("Array's element: \n");
	for(int i =0; i <size; i++){
		printf("%d\t", Arr[i]);
	}
	printf("\n");
}
void displayRange (int Arr[], int size){
	int min, max;
	printf("Input min and max values: \n");
	scanf("%d %d", &min, &max);
	if(min > max){
		int temp = max;
		max = min;
		min = temp;
	}
	for(int i =0; i< size; i++){
		if(Arr[i] >= min && Arr[i] <= max){
			printf("%d\t", Arr[i]);
		}
	}
		printf("\n");
}
void sortArray(int Arr[], int size){
	printf("Array sort in ascending orders: \n");
	for(int i =0; i<size-1; i++){
		for(int j=size-1; j>i; j--){
			if(Arr[j] < Arr[j-1]){
				int temp = Arr[j];
				Arr[j] = Arr[j-1];
				Arr[j-1] = temp;
			}
		}
	}
	for(int i =0; i<size; i++){
		printf("%d\t", Arr[i]);
	}
		printf("\n");
}
int main(){
	int size =5;
	int Arr[100];
	//int *Arr=(int*)malloc(size*sizeof(int));
	int option;
	do{
	printf("1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Print out the array\n");
	printf("4- Print out values in a range of inputted min and max values, inclusively.\n");
	printf("5- Sort the array in ascending order\n");
	printf("Others- Quit");
	printf("\nSelect an option: ");
	scanf("%d", &option);
	switch(option){
		case 1:
			addAValues(Arr, size);
			break;
		case 2:
			searchAValue(Arr, size);
			break;
		case 3:
			display(Arr, size);
			break;
		case 4:
			displayRange (Arr, size);
			break;
		case 5:
			sortArray(Arr,size);
			break;
	}
}	while(option ==1 || option ==2 || option ==3 || option ==4 || option ==5);
}
