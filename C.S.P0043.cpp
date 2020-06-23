#include<stdio.h>
#include<stdlib.h>
int size = 0;
int addAValues(int Arr[]){
	printf("Input an Integer: ");
		scanf("%d", &Arr[size]);
		printf("\n");

}
void searchAValue(int Arr[]){
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
void removeFirstExistence (int Arr[]){
	int remove;
	printf("Enter an integer: ");
	scanf("%d", &remove);
	int index=-1;
	for(int j =0; j < size; j++){
		if(Arr[j] == remove){
			index = j;
			break;
		}
		
	}
	if(index == -1){
		printf("This value doesn't exist\n");
		return;
	}
	for(int i = index; i < size-1; i++){
		
		Arr[i]=Arr[i+1];
		
	}
	size--;
}
void removeAllExistence (int Arr[]){
	
	int temp[size];
	
	int remove;
	printf("Enter an integer: ");
	scanf("%d", &remove);
	int sizetemp=0;
	for(int i=0;i<size;i++){
		if(Arr[i]!=remove){
			temp[sizetemp]=Arr[i];
			sizetemp++;
		}
	}
	
	size=sizetemp;
	for(int i=0;i<sizetemp;i++){
		Arr[i]=temp[i];
	}

}
void display(int Arr[]){
	printf("Array's element: \n");
	for(int i =0; i <size; i++){
		printf("%d\t", Arr[i]);
	}
	printf("\n");
}
void sortArrayDecending(int Arr[]){
	int temp;
	printf("Array sort in decending orders: \n");
	for(int i =0; i<size-1; i++){
		for(int j=size-1; j>i; j--){
			if(Arr[j] > Arr[j-1]){
				 temp = Arr[j];
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
void sortArrayAscending(int Arr[]){
	int temp;
	printf("Array sort in ascending orders: \n");
	for(int i =0; i<size-1; i++){
		for(int j=size-1; j>i; j--){
			if(Arr[j] < Arr[j-1]){
				 temp = Arr[j];
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

	int Arr[100];
	int option;
	do{
	printf("1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Remove the first existence of a value\n");
	printf("4- Remove all existences of a value\n");
	printf("5- Print out the array\n");
	printf("6- Sort the array in ascending order\n");
	printf("7- Sort the array in descending order\n");
	printf("Others- Quit");
	printf("\nSelect an option: ");
	scanf("%d", &option);
	switch(option){
		case 1:
			addAValues(Arr);
			size++;
			break;
		case 2:
			searchAValue(Arr);
			break;
		case 3:
			removeFirstExistence (Arr);
			break;
		case 4:
			 removeAllExistence (Arr);
			 break;
		case 5:
			display(Arr);
			break;
		case 6:
			copyArray(Arr, Arr2);
			sortArrayAscending(Arr);
			break;
		case 7:
			copyArray(Arr, Arr2);
			sortArrayDecending(Arr);
			break;
	}
}	while(option ==1 || option ==2 || option ==3 || option ==4 || option ==5 || option == 6 || option == 7);
}

