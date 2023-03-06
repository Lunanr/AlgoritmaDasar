#include<stdio.h>

int getNumber(){
	return 5;
}

int sum(int *first, int *second){
	printf("Alamat = %d\n", first);
	int total = *first + *second;
	return total;
}

int main(){
	
	//pointer
//	int a = 0;
//	int *p;
//	int **p2;
//	p = &a;
//	p2 = &p;
//	
//	printf("%d\n", &a);
//	printf("%d\n", &p);
//	printf("%d\n", *p2);
//	
	int a = getNumber();
	printf("%d\n", getNumber());
	int first = 3;
	int second = 7;
	int hasilSum = sum(&first, &second);
	printf("%d\n", hasilSum);
	
	
	return 0; 
}
