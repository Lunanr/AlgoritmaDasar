#include <stdio.h>
 
int main(void)
{
	printf("Program pembuatan segitiga siku atas kiri\n");
	printf("=========================================\n");
	
	int a,i,j;
	printf("Input tinggi segitiga: ");
	scanf("%d", &a);
	
	printf("\n");
	
	for(i = 0; i <= a; i++){
		for(j = 0; j<=a-i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("Program pembuatan segitiga siku bawah kiri\n");
	printf("==========================================\n");
	
	printf("\n");
	
	for(i = 0; i<=a; i++){
		for(j = 0; j<=i ; j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("Program pembuatan segitiga siku atas kiri\n");
	printf("==========================================\n");
	
	printf("\n");
	
	for(i = 0; i <= a ; i++){
		for(j = 0; j <= a; j++){
			if(j <= i-1){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	
	printf("Program pembuatan segitiga siku bawah kiri\n");
	printf("==========================================\n");
	
	printf("\n");
	
	for(i = a; i >= 0 ; i--){
		for(j = 0; j <= a; j++){
			if(j <= i-1){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
	
  return 0;
}

