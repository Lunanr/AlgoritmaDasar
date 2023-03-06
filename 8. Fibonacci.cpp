#include<stdio.h>

int fibonacci(int i){
	if(i == 0) return 0;
	if(i == 1) return 1;
	
	return fibonacci(i-1) + fibonacci(i-2);	
}

int main(){
	//Menjumlahkan dua bilangan sebelumnya
	
	int f = fibonacci(6);
	printf("%d", f);
	
	return 0;
}
