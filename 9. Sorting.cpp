#include<stdio.h>

int arr[] = {37,29,14,10,14};
int nan[] = {20,40,58,77,10};
int length = 5;

void bubbleSort(){
	for(int i = 0; i < length; i++){
		bool swapped = false;
		for(int j = 0; j < length-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = true;
			}
		}
		if(swapped == false) break;
	}
}

void bubbleSortDesc(){
	for(int i = 0; i < length; i++){
		bool swapped = false;
		for(int j = 0; j < length-i-1; j++){
			if(nan[j] < nan[j+1]){
				int temp = nan[j];
				nan[j] = nan[j+1];
				nan[j+1] = temp;
				swapped = true;
			}
		}
		if(swapped == false) break;
	}
}

void selectionSort(){
	for(int i = 0; i < length; i++){
		int min = i;
		for(int j = i+1; j < length;j++){
			if(arr[j] < arr[min]){
				min=j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
}

void selectionSortDesc(){
	for(int i = 0; i < length; i++){
		int min = i;
		for(int j = i+1; j < length;j++){
			if(nan[j] > nan[min]){
				min=j;
			}
		}
		int temp = nan[min];
		nan[min] = nan[i];
		nan[i] = temp;
	}
}

void printDesc(){
	for(int i = 0; i < length; i++){
		printf("%d ", nan[i]);
	}
	printf("\n");
}

void print(){
	for(int i = 0; i < length; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	
	//Ascending / Descending
	//Bubble sort, Selection sort
	printf("Selection Sort Ascending \n");
	selectionSort();
	print();
	
	printf("Bubble Sort Ascending \n");
	bubbleSort();
	print();
	
	printf("Selection Sort Descending\n");
	selectionSortDesc();
	printDesc();
	
	printf("Bubble Sort Descending\n");
	bubbleSortDesc();
	printDesc();
	
	
	return 0;
}
