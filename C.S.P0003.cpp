#include <stdio.h>
#include <stdlib.h>
int enterSize(int size){
	printf("Please enter size of array: ");
	scanf("%d", &size);
	return size;
}
void enterArray(int *arr, int size){
	for(int i =0; i < size; i++){
		printf("Enter element [%d]: ", i);
		scanf("%d", &arr[i]);
	}
}
void sortArray(int *arr, int size){
	for(int i =0; i< size -1; i++){
		for(int j =size-1; j> i; j--){
			if(arr[j] < arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
}
void addnewElement(int *arr, int &size, int &x){
    printf("\nPlease enter new value:");
   	scanf("%d", &x);
    for(int i=size;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]=x;
    size++;
    sortArray(arr, size);
}
void displayArray(int *arr, int size){
		for(int i =0; i< size; i++){
		printf("%d\t", arr[i]);
	}
}
int main(){
	int size;
	int *arr;
	int x;
	arr = (int*)malloc(size*sizeof(int));
	size = enterSize(size);
	enterArray(arr, size);
	printf("The array after sorting:\n");
	sortArray(arr, size);
	displayArray(arr, size);
	addnewElement(arr, size, x);
	printf("New array: \n");
	displayArray(arr, size);
	free(arr);
}





