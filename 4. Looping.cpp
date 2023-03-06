#include<stdio.h>

int main(){
	
	//Repetition / Looping
	//for, while, do while
	//for 3 bisa statement
	//while untuk 1 statement
	//break, continue untuk skip statement
	
	// i+=2 = i = i + 2
	
	for(int i = 1; i <= 10; i+=2){
		if(i == 5) continue;
		
		printf("%d\n", i);
	}
	
	
	printf("while:\n");
	int j = 11;
	while(j <= 10){
		printf("%d\n", j++);
	}
	
	printf("do while:\n");
	int k = 11;
	do{
		printf("%d\n", k++);	
	}while(k<=10);

	//nested loop
	int angka,i,j;
	scanf("%d",&angka);
	
	printf("\n");
	
	for(i = 0; i < angka; i++){
		for(j = 0; j < angka; j++){
			if(i==0 || j==0 || i == angka-1 || j == angka-1){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
